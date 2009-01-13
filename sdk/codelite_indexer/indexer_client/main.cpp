#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

#include "network/clindexerprotocol.h"
#include "network/cl_indexer_reply.h"
#include "network/cl_indexer_request.h"
#include "network/named_pipe_client.h"
#include "network/np_connections_server.h"

#ifdef __WXMSW__
#define PIPE_NAME "\\\\.\\pipe\\codelite_indexer"
#else
#define PIPE_NAME "/tmp/codelite_indexer.sock"
#endif

int main(int argc, char **argv)
{
	clIndexerRequest req;
	clNamedPipeClient client(PIPE_NAME);

	// build the request
	req.setCmd(clIndexerRequest::CLI_PARSE);
	std::vector<std::string> files;
	
#ifdef __WXMSW__	
	files.push_back("C:\\Development\\C++\\codelite\\trunk\\sqlite3\\sqlite3.h");
#else
	files.push_back("/home/eran/devl/codelite/trunk/sqlite3/sqlite3.h");
#endif

	req.setFiles(files);
	req.setCtagOptions("--excmd=pattern --sort=no --fields=aKmSsnit --c-kinds=+p --C++-kinds=+p  -IwxT,_T");

	for (size_t i=0; i<100; i++) {
		// connect to server
		if(!client.connect()){
			printf("ERROR: failed to connect to server\n");
			break;
		}

		clIndexerProtocol::SendRequest(&client, req);

		clIndexerReply reply;
		if(!clIndexerProtocol::ReadReply(&client, reply)){
			printf("ERROR: failed to read reply\n");
		}
		
		//printf("%s\n", reply.getTags().c_str());
		// close the connection
		client.disconnect();
	}
	return 0;
}

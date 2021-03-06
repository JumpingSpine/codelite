#ifndef TEXTVIEW_H
#define TEXTVIEW_H

#include <wx/textctrl.h>
#include <wx/stc/stc.h>
#include "codelite_exports.h"
#include "wxTerminalColourHandler.h"

class WXDLLIMPEXP_SDK TextView : public wxWindow
{
    // wxStyledTextCtrl* m_ctrl = nullptr;
    wxTextCtrl* m_ctrl = nullptr;
    wxTerminalColourHandler m_colourHandler;

public:
    TextView(wxWindow* parent, wxWindowID winid = wxNOT_FOUND);
    virtual ~TextView();
    void Focus();
    wxWindow* GetCtrl() { return m_ctrl; }
    
    // API
    void AppendText(const wxString& buffer);
    void StyleAndAppend(const wxString& buffer);
    long GetLastPosition() const;
    wxString GetRange(int from, int to) const;
    bool PositionToXY(long pos, long* x, long* y) const;
    long XYToPosition(long x, long y) const;
    void Remove(long from, long to);
    void SetInsertionPoint(long pos);
    void SetInsertionPointEnd();
    long GetInsertionPoint() const;
    void SelectNone();
    int GetNumberOfLines() const;
    void SetDefaultStyle(const wxTextAttr& attr);
    wxTextAttr GetDefaultStyle() const;
    bool IsEditable() const;
    void SetEditable(bool b);
    void Replace(long from, long to, const wxString& replaceWith);
    wxString GetLineText(int lineNumber) const;
    void ReloadSettings();
};

#endif // TEXTVIEW_H

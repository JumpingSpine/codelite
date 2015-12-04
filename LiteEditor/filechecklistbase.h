//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// Copyright            : (C) 2015 Eran Ifrah
// File name            : filechecklistbase.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: filechecklistbase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_LITEEDITOR_FILECHECKLISTBASE_BASE_CLASSES_H
#define CODELITE_LITEEDITOR_FILECHECKLISTBASE_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/checklst.h>
#include <wx/button.h>
#include <wx/textctrl.h>
#include <wx/commandlinkbutton.h>
#include <wx/checkbox.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class FileCheckListBase : public wxDialog
{
protected:
    wxStaticText* m_caption;
    wxCheckListBox* m_fileCheckList;
    wxButton* m_clearAll;
    wxButton* m_checkAllButton;
    wxTextCtrl* m_selectedFilePath;
    wxStdDialogButtonSizer* m_stdBtnSizer2;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnClearAll(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCheckAll(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetCaption() { return m_caption; }
    wxCheckListBox* GetFileCheckList() { return m_fileCheckList; }
    wxButton* GetClearAll() { return m_clearAll; }
    wxButton* GetCheckAllButton() { return m_checkAllButton; }
    wxTextCtrl* GetSelectedFilePath() { return m_selectedFilePath; }
    FileCheckListBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Select Files"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP|wxRESIZE_BORDER);
    virtual ~FileCheckListBase();
};


class FilesModifiedDlgBase : public wxDialog
{
public:
    enum {
        ID_BUTTON_CHOOSE = 5842,
        ID_BUTTON_IGNORE = 5843,
        ID_BUTTON_LOAD = 5844,
    };
protected:
    wxStaticText* m_staticText34;
    wxCommandLinkButton* m_cmdLnkBtn30;
    wxCommandLinkButton* m_cmdLnkBtn28;
    wxCommandLinkButton* m_cmdLnkBtnNone;
    wxCheckBox* m_checkBoxRemember;

protected:
    virtual void OnLoad(wxCommandEvent& event) { event.Skip(); }
    virtual void OnChoose(wxCommandEvent& event) { event.Skip(); }
    virtual void OnIgnore(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText34() { return m_staticText34; }
    wxCommandLinkButton* GetCmdLnkBtn30() { return m_cmdLnkBtn30; }
    wxCommandLinkButton* GetCmdLnkBtn28() { return m_cmdLnkBtn28; }
    wxCommandLinkButton* GetCmdLnkBtnNone() { return m_cmdLnkBtnNone; }
    wxCheckBox* GetCheckBoxRemember() { return m_checkBoxRemember; }
    FilesModifiedDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Files were modified outside the editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~FilesModifiedDlgBase();
};

#endif

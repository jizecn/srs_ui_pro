/***************************************************************
 * Name:      srs_ui_proMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Roman Navarro (rnavarro@robotnik.es)
 * Created:   2012-03-13
 * Copyright: Roman Navarro ()
 * License:
 **************************************************************/

#include "srs_ui_proMain.h"
#include <ros/package.h>
//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }
    return wxbuild;
}

//(*IdInit(srs_ui_proFrame)
const long srs_ui_proFrame::ID_GRID1 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT7 = wxNewId();
const long srs_ui_proFrame::ID_LISTCTRL1 = wxNewId();
const long srs_ui_proFrame::ID_PANEL10 = wxNewId();
const long srs_ui_proFrame::ID_LISTCTRL2 = wxNewId();
const long srs_ui_proFrame::ID_PANEL9 = wxNewId();
const long srs_ui_proFrame::ID_NOTEBOOK2 = wxNewId();
const long srs_ui_proFrame::ID_PANEL4 = wxNewId();
const long srs_ui_proFrame::ID_PANEL2 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON14 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL6 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL7 = wxNewId();
const long srs_ui_proFrame::ID_CHOICE3 = wxNewId();
const long srs_ui_proFrame::ID_PANEL46 = wxNewId();
const long srs_ui_proFrame::ID_PANEL20 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON13 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL3 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL8 = wxNewId();
const long srs_ui_proFrame::ID_CHOICE8 = wxNewId();
const long srs_ui_proFrame::ID_CHOICE4 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT5 = wxNewId();
const long srs_ui_proFrame::ID_PANEL19 = wxNewId();
const long srs_ui_proFrame::ID_PANEL18 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON19 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL9 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL10 = wxNewId();
const long srs_ui_proFrame::ID_CHOICE7 = wxNewId();
const long srs_ui_proFrame::ID_CHOICE5 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT11 = wxNewId();
const long srs_ui_proFrame::ID_PANEL37 = wxNewId();
const long srs_ui_proFrame::ID_PANEL21 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL5 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL14 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON1 = wxNewId();
const long srs_ui_proFrame::ID_CHOICE10 = wxNewId();
const long srs_ui_proFrame::ID_CHOICE9 = wxNewId();
const long srs_ui_proFrame::ID_CHOICE2 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT13 = wxNewId();
const long srs_ui_proFrame::ID_PANEL30 = wxNewId();
const long srs_ui_proFrame::ID_PANEL22 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON25 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL11 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL12 = wxNewId();
const long srs_ui_proFrame::ID_CHOICE12 = wxNewId();
const long srs_ui_proFrame::ID_CHOICE11 = wxNewId();
const long srs_ui_proFrame::ID_CHOICE6 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT25 = wxNewId();
const long srs_ui_proFrame::ID_PANEL49 = wxNewId();
const long srs_ui_proFrame::ID_PANEL47 = wxNewId();
const long srs_ui_proFrame::ID_NOTEBOOK4 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON16 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON17 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON15 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL17 = wxNewId();
const long srs_ui_proFrame::ID_PANEL11 = wxNewId();
const long srs_ui_proFrame::ID_STATICBITMAP9 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT15 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON9 = wxNewId();
const long srs_ui_proFrame::ID_PANEL32 = wxNewId();
const long srs_ui_proFrame::ID_PANEL13 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON5 = wxNewId();
const long srs_ui_proFrame::ID_PANEL27 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT12 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON33 = wxNewId();
const long srs_ui_proFrame::ID_COMBOBOX3 = wxNewId();
const long srs_ui_proFrame::ID_PANEL14 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON6 = wxNewId();
const long srs_ui_proFrame::ID_CHOICE1 = wxNewId();
const long srs_ui_proFrame::ID_SPINCTRL1 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON7 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL4 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT14 = wxNewId();
const long srs_ui_proFrame::ID_STATICBITMAP6 = wxNewId();
const long srs_ui_proFrame::ID_PANEL29 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON22 = wxNewId();
const long srs_ui_proFrame::ID_PANEL45 = wxNewId();
const long srs_ui_proFrame::ID_PANEL42 = wxNewId();
const long srs_ui_proFrame::ID_PANEL39 = wxNewId();
const long srs_ui_proFrame::ID_PANEL41 = wxNewId();
const long srs_ui_proFrame::ID_PANEL43 = wxNewId();
const long srs_ui_proFrame::ID_PANEL44 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT18 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT20 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT19 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT21 = wxNewId();
const long srs_ui_proFrame::ID_PANEL40 = wxNewId();
const long srs_ui_proFrame::ID_PANEL28 = wxNewId();
const long srs_ui_proFrame::ID_PANEL15 = wxNewId();
const long srs_ui_proFrame::ID_NOTEBOOK3 = wxNewId();
const long srs_ui_proFrame::ID_PANEL12 = wxNewId();
const long srs_ui_proFrame::ID_STATICBITMAP3 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT9 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON3 = wxNewId();
const long srs_ui_proFrame::ID_PANEL24 = wxNewId();
const long srs_ui_proFrame::ID_RADIOBUTTON2 = wxNewId();
const long srs_ui_proFrame::ID_RADIOBUTTON3 = wxNewId();
const long srs_ui_proFrame::ID_RADIOBUTTON4 = wxNewId();
const long srs_ui_proFrame::ID_RADIOBUTTON5 = wxNewId();
const long srs_ui_proFrame::ID_RADIOBUTTON6 = wxNewId();
const long srs_ui_proFrame::ID_RADIOBUTTON1 = wxNewId();
const long srs_ui_proFrame::ID_PANEL23 = wxNewId();
const long srs_ui_proFrame::ID_STATICBITMAP10 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT16 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON10 = wxNewId();
const long srs_ui_proFrame::ID_PANEL33 = wxNewId();
const long srs_ui_proFrame::ID_STATICBITMAP11 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT17 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON11 = wxNewId();
const long srs_ui_proFrame::ID_PANEL34 = wxNewId();
const long srs_ui_proFrame::ID_STATICBITMAP13 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT23 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON30 = wxNewId();
const long srs_ui_proFrame::ID_PANEL36 = wxNewId();
const long srs_ui_proFrame::ID_STATICBITMAP12 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT22 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON12 = wxNewId();
const long srs_ui_proFrame::ID_PANEL35 = wxNewId();
const long srs_ui_proFrame::ID_STATICBITMAP1 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT8 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON4 = wxNewId();
const long srs_ui_proFrame::ID_PANEL38 = wxNewId();
const long srs_ui_proFrame::ID_PANEL25 = wxNewId();
const long srs_ui_proFrame::ID_STATICBITMAP5 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT10 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON23 = wxNewId();
const long srs_ui_proFrame::ID_PANEL50 = wxNewId();
const long srs_ui_proFrame::ID_PANEL48 = wxNewId();
const long srs_ui_proFrame::ID_NOTEBOOK5 = wxNewId();
const long srs_ui_proFrame::ID_PANEL17 = wxNewId();
const long srs_ui_proFrame::ID_NOTEBOOK1 = wxNewId();
const long srs_ui_proFrame::ID_PANEL7 = wxNewId();
const long srs_ui_proFrame::ID_PANEL6 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT3 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL1 = wxNewId();
const long srs_ui_proFrame::ID_GAUGE1 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT2 = wxNewId();
const long srs_ui_proFrame::ID_GAUGE2 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT4 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT1 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT24 = wxNewId();
const long srs_ui_proFrame::ID_PANEL52 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL2 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT6 = wxNewId();
const long srs_ui_proFrame::ID_PANEL53 = wxNewId();
const long srs_ui_proFrame::ID_PANEL51 = wxNewId();
const long srs_ui_proFrame::ID_PANEL5 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL13 = wxNewId();
const long srs_ui_proFrame::ID_PANEL57 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL15 = wxNewId();
const long srs_ui_proFrame::ID_PANEL56 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL16 = wxNewId();
const long srs_ui_proFrame::ID_PANEL58 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL18 = wxNewId();
const long srs_ui_proFrame::ID_PANEL59 = wxNewId();
const long srs_ui_proFrame::ID_NOTEBOOK7 = wxNewId();
const long srs_ui_proFrame::ID_BITMAPBUTTON2 = wxNewId();
const long srs_ui_proFrame::ID_PANEL55 = wxNewId();
const long srs_ui_proFrame::ID_SCROLLEDWINDOW2 = wxNewId();
const long srs_ui_proFrame::ID_PANEL61 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT28 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT29 = wxNewId();
const long srs_ui_proFrame::ID_COMBOBOX1 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT30 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON8 = wxNewId();
const long srs_ui_proFrame::ID_STATICLINE2 = wxNewId();
const long srs_ui_proFrame::ID_STATICLINE3 = wxNewId();
const long srs_ui_proFrame::ID_STATICLINE1 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT31 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT33 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT32 = wxNewId();
const long srs_ui_proFrame::ID_COMBOBOX2 = wxNewId();
const long srs_ui_proFrame::ID_TEXTCTRL19 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON21 = wxNewId();
const long srs_ui_proFrame::ID_BUTTON20 = wxNewId();
const long srs_ui_proFrame::ID_PANEL8 = wxNewId();
const long srs_ui_proFrame::ID_PANEL26 = wxNewId();
const long srs_ui_proFrame::ID_NOTEBOOK6 = wxNewId();
const long srs_ui_proFrame::ID_PANEL16 = wxNewId();
const long srs_ui_proFrame::ID_PANEL54 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT26 = wxNewId();
const long srs_ui_proFrame::ID_STATICTEXT27 = wxNewId();
const long srs_ui_proFrame::ID_SCROLLEDWINDOW1 = wxNewId();
const long srs_ui_proFrame::ID_PANEL1 = wxNewId();
const long srs_ui_proFrame::ID_BITMAPBUTTON1 = wxNewId();
const long srs_ui_proFrame::ID_PANEL31 = wxNewId();
const long srs_ui_proFrame::ID_PANEL3 = wxNewId();
const long srs_ui_proFrame::idMenuQuit = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM10 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM11 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM13 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM1 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM3 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM6 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM17 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM18 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM19 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM21 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM22 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM20 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM16 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM2 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM9 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM5 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM7 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM4 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM12 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM15 = wxNewId();
const long srs_ui_proFrame::ID_MENUITEM14 = wxNewId();
const long srs_ui_proFrame::idMenuAbout = wxNewId();
const long srs_ui_proFrame::ID_TIMER1 = wxNewId();
const long srs_ui_proFrame::ID_TIMER2 = wxNewId();
const long srs_ui_proFrame::ID_TIMER3 = wxNewId();
const long srs_ui_proFrame::ID_STATUSBAR1 = wxNewId();
const long srs_ui_proFrame::ID_TIMER4 = wxNewId();
const long srs_ui_proFrame::ID_TIMER5 = wxNewId();
const long srs_ui_proFrame::ID_TIMER6 = wxNewId();
//*)


BEGIN_EVENT_TABLE(srs_ui_proFrame,wxFrame)
    //(*EventTable(srs_ui_proFrame)
    //*)
END_EVENT_TABLE()


srs_ui_proFrame::srs_ui_proFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(srs_ui_proFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxBoxSizer* BoxSizer3;
    wxMenu* Menu5;
    wxMenu* Menu1;
    wxBoxSizer* BoxSizer10;
    wxBoxSizer* BoxSizer7;
    wxMenuItem* MenuItem20;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer9;
    wxBoxSizer* BoxSizer4;
    wxBoxSizer* BoxSizer8;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;
    wxBoxSizer* BoxSizer6;
    wxBoxSizer* BoxSizer5;

    Create(parent, wxID_ANY, _("GUI-PRO"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxFULL_REPAINT_ON_RESIZE, _T("wxID_ANY"));
    SetClientSize(wxSize(1357,654));
    panel_main = new wxPanel(this, ID_PANEL3, wxPoint(0,0), wxSize(1360,400), wxTAB_TRAVERSAL, _T("ID_PANEL3"));
    panel_comunications_main = new wxPanel(panel_main, ID_PANEL2, wxPoint(8,0), wxSize(391,688), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
    PanelCommunications = new wxPanel(panel_comunications_main, ID_PANEL4, wxPoint(0,0), wxSize(360,600), wxTAB_TRAVERSAL, _T("ID_PANEL4"));
    grid_requests = new wxGrid(PanelCommunications, ID_GRID1, wxPoint(0,32), wxSize(344,176), 0, _T("ID_GRID1"));
    grid_requests->CreateGrid(1,3);
    grid_requests->SetMinSize(wxSize(-1,-1));
    grid_requests->EnableEditing(false);
    grid_requests->EnableGridLines(true);
    grid_requests->SetRowLabelSize(1);
    grid_requests->SetDefaultColSize(110, true);
    grid_requests->SetColLabelValue(0, _("ID"));
    grid_requests->SetColLabelValue(1, _("URI"));
    grid_requests->SetColLabelValue(2, _("Problem"));
    grid_requests->SetCellValue(0, 0, _("4815162342"));
    grid_requests->SetCellValue(0, 1, _("http://localhost:11311"));
    grid_requests->SetCellValue(0, 2, _("Can\'t grasp an object"));
    grid_requests->SetDefaultCellFont( grid_requests->GetFont() );
    grid_requests->SetDefaultCellTextColour( grid_requests->GetForegroundColour() );
    StaticText7 = new wxStaticText(PanelCommunications, ID_STATICTEXT7, _("Requests"), wxPoint(8,8), wxSize(72,24), 0, _T("ID_STATICTEXT7"));
    chat = new wxNotebook(PanelCommunications, ID_NOTEBOOK2, wxPoint(0,232), wxSize(360,240), wxNB_MULTILINE, _T("ID_NOTEBOOK2"));
    Panel10 = new wxPanel(chat, ID_PANEL10, wxPoint(4,381), wxSize(352,243), wxTAB_TRAVERSAL, _T("ID_PANEL10"));
    notebook_skype_contacts_contactList = new wxListCtrl(Panel10, ID_LISTCTRL1, wxPoint(16,16), wxSize(320,168), wxLC_REPORT|wxSIMPLE_BORDER, wxDefaultValidator, _T("ID_LISTCTRL1"));
    PanelIncomingCalls = new wxPanel(chat, ID_PANEL9, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL9"));
    notebook_skype_incoming_calls_incomingList = new wxListCtrl(PanelIncomingCalls, ID_LISTCTRL2, wxPoint(16,16), wxSize(320,168), wxLC_REPORT|wxSIMPLE_BORDER, wxDefaultValidator, _T("ID_LISTCTRL2"));
    chat->AddPage(Panel10, _("Contacts"), false);
    chat->AddPage(PanelIncomingCalls, _("Incoming Calls"), false);
    BoxSizer7->Add(PanelCommunications, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    panel_comunications_main->SetSizer(BoxSizer7);
    BoxSizer7->SetSizeHints(panel_comunications_main);
    panel_actions_main = new wxPanel(panel_main, ID_PANEL6, wxPoint(376,0), wxSize(674,482), wxTAB_TRAVERSAL, _T("ID_PANEL6"));
    panel_actions_main->Disable();
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    panel_actions = new wxPanel(panel_actions_main, ID_PANEL7, wxPoint(360,0), wxSize(800,500), wxTAB_TRAVERSAL, _T("ID_PANEL7"));
    tab_actions = new wxNotebook(panel_actions, ID_NOTEBOOK1, wxPoint(0,0), wxSize(656,472), 0, _T("ID_NOTEBOOK1"));
    tab_automatic = new wxPanel(tab_actions, ID_PANEL11, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL11"));
    NotebookFull = new wxNotebook(tab_automatic, ID_NOTEBOOK4, wxPoint(0,0), wxSize(648,100), 0, _T("ID_NOTEBOOK4"));
    tab_automatic_move = new wxPanel(NotebookFull, ID_PANEL20, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL20"));
    BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
    panel_GetMilk_sub = new wxPanel(tab_automatic_move, ID_PANEL46, wxDefaultPosition, wxSize(968,392), wxTAB_TRAVERSAL, _T("ID_PANEL46"));
    button_GetMilkStart = new wxButton(panel_GetMilk_sub, ID_BUTTON14, _("Start"), wxPoint(128,16), wxSize(48,29), 0, wxDefaultValidator, _T("ID_BUTTON14"));
    box_automatic_move_small = new wxTextCtrl(panel_GetMilk_sub, ID_TEXTCTRL6, wxEmptyString, wxPoint(184,16), wxSize(448,29), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
    box_automatic_move_big = new wxTextCtrl(panel_GetMilk_sub, ID_TEXTCTRL7, wxEmptyString, wxPoint(8,56), wxSize(624,296), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL7"));
    choice_automatic_move = new wxChoice(panel_GetMilk_sub, ID_CHOICE3, wxPoint(8,16), wxSize(112,29), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE3"));
    BoxSizer5->Add(panel_GetMilk_sub, 0, wxALIGN_LEFT|wxALIGN_TOP, 0);
    tab_automatic_move->SetSizer(BoxSizer5);
    BoxSizer5->Fit(tab_automatic_move);
    BoxSizer5->SetSizeHints(tab_automatic_move);
    tab_automatic_get = new wxPanel(NotebookFull, ID_PANEL18, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL18"));
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    Panel26 = new wxPanel(tab_automatic_get, ID_PANEL19, wxDefaultPosition, wxSize(968,392), wxTAB_TRAVERSAL, _T("ID_PANEL19"));
    Button1 = new wxButton(Panel26, ID_BUTTON13, _("Start"), wxPoint(248,16), wxSize(48,29), 0, wxDefaultValidator, _T("ID_BUTTON13"));
    box_automatic_get_small = new wxTextCtrl(Panel26, ID_TEXTCTRL3, wxEmptyString, wxPoint(304,16), wxSize(328,29), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    box_automatic_get_big = new wxTextCtrl(Panel26, ID_TEXTCTRL8, wxEmptyString, wxPoint(8,56), wxSize(624,296), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL8"));
    choice_automatic_get_search = new wxChoice(Panel26, ID_CHOICE8, wxPoint(128,16), wxSize(112,29), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE8"));
    choice_automatic_get = new wxChoice(Panel26, ID_CHOICE4, wxPoint(8,16), wxSize(112,29), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE4"));
    StaticText5 = new wxStaticText(Panel26, ID_STATICTEXT5, _("Optional:"), wxPoint(128,0), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    BoxSizer3->Add(Panel26, 0, wxALIGN_LEFT|wxALIGN_TOP, 0);
    tab_automatic_get->SetSizer(BoxSizer3);
    BoxSizer3->Fit(tab_automatic_get);
    BoxSizer3->SetSizeHints(tab_automatic_get);
    tab_automatic_search = new wxPanel(NotebookFull, ID_PANEL21, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL21"));
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    Panel28 = new wxPanel(tab_automatic_search, ID_PANEL37, wxDefaultPosition, wxSize(968,392), wxTAB_TRAVERSAL, _T("ID_PANEL37"));
    Button12 = new wxButton(Panel28, ID_BUTTON19, _("Start"), wxPoint(248,16), wxSize(48,29), 0, wxDefaultValidator, _T("ID_BUTTON19"));
    box_automatic_search_small = new wxTextCtrl(Panel28, ID_TEXTCTRL9, wxEmptyString, wxPoint(304,16), wxSize(328,29), 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
    box_automatic_search_big = new wxTextCtrl(Panel28, ID_TEXTCTRL10, wxEmptyString, wxPoint(8,56), wxSize(624,296), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL10"));
    choice_automatic_search_search = new wxChoice(Panel28, ID_CHOICE7, wxPoint(128,16), wxSize(112,29), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE7"));
    choice_automatic_search = new wxChoice(Panel28, ID_CHOICE5, wxPoint(8,16), wxSize(112,29), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE5"));
    StaticText11 = new wxStaticText(Panel28, ID_STATICTEXT11, _("Optional:"), wxPoint(128,0), wxDefaultSize, 0, _T("ID_STATICTEXT11"));
    BoxSizer4->Add(Panel28, 0, wxALIGN_LEFT|wxALIGN_TOP, 0);
    tab_automatic_search->SetSizer(BoxSizer4);
    BoxSizer4->Fit(tab_automatic_search);
    BoxSizer4->SetSizeHints(tab_automatic_search);
    tab_automatic_fetch = new wxPanel(NotebookFull, ID_PANEL22, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL22"));
    BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
    panel_GoTo_sub = new wxPanel(tab_automatic_fetch, ID_PANEL30, wxDefaultPosition, wxSize(968,392), wxTAB_TRAVERSAL, _T("ID_PANEL30"));
    box_automatic_fetch_small = new wxTextCtrl(panel_GoTo_sub, ID_TEXTCTRL5, wxEmptyString, wxPoint(424,16), wxSize(208,29), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    box_automatic_fetch_big = new wxTextCtrl(panel_GoTo_sub, ID_TEXTCTRL14, wxEmptyString, wxPoint(8,56), wxSize(624,296), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL14"));
    button_GoToStart = new wxButton(panel_GoTo_sub, ID_BUTTON1, _("Start"), wxPoint(368,16), wxSize(48,29), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    choice_automatic_fetch_order = new wxChoice(panel_GoTo_sub, ID_CHOICE10, wxPoint(128,16), wxSize(112,29), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE10"));
    choice_automatic_fetch_search = new wxChoice(panel_GoTo_sub, ID_CHOICE9, wxPoint(248,16), wxSize(112,29), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE9"));
    choice_automatic_fetch_search->Append(_("kitchen"));
    choice_automatic_fetch_search->Append(_("home"));
    choice_automatic_fetch = new wxChoice(panel_GoTo_sub, ID_CHOICE2, wxPoint(8,16), wxSize(112,29), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE2"));
    StaticText13 = new wxStaticText(panel_GoTo_sub, ID_STATICTEXT13, _("Optional:"), wxPoint(248,0), wxDefaultSize, 0, _T("ID_STATICTEXT13"));
    BoxSizer8->Add(panel_GoTo_sub, 0, wxALIGN_LEFT|wxALIGN_TOP, 0);
    tab_automatic_fetch->SetSizer(BoxSizer8);
    BoxSizer8->Fit(tab_automatic_fetch);
    BoxSizer8->SetSizeHints(tab_automatic_fetch);
    tab_automatic_deliver = new wxPanel(NotebookFull, ID_PANEL47, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL47"));
    BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
    Panel30 = new wxPanel(tab_automatic_deliver, ID_PANEL49, wxDefaultPosition, wxSize(968,392), wxTAB_TRAVERSAL, _T("ID_PANEL49"));
    Button16 = new wxButton(Panel30, ID_BUTTON25, _("Start"), wxPoint(368,16), wxSize(48,29), 0, wxDefaultValidator, _T("ID_BUTTON25"));
    box_automatic_deliver_small = new wxTextCtrl(Panel30, ID_TEXTCTRL11, wxEmptyString, wxPoint(424,16), wxSize(208,29), 0, wxDefaultValidator, _T("ID_TEXTCTRL11"));
    box_automatic_deliver_big = new wxTextCtrl(Panel30, ID_TEXTCTRL12, wxEmptyString, wxPoint(8,56), wxSize(624,296), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL12"));
    choice_automatic_deliver_deliver_position = new wxChoice(Panel30, ID_CHOICE12, wxPoint(128,16), wxSize(112,29), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE12"));
    choice_automatic_deliver_search = new wxChoice(Panel30, ID_CHOICE11, wxPoint(248,16), wxSize(112,29), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE11"));
    choice_automatic_deliver = new wxChoice(Panel30, ID_CHOICE6, wxPoint(8,16), wxSize(112,29), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE6"));
    StaticText14 = new wxStaticText(Panel30, ID_STATICTEXT25, _("Optional:"), wxPoint(248,0), wxDefaultSize, 0, _T("ID_STATICTEXT25"));
    BoxSizer6->Add(Panel30, 0, wxALIGN_LEFT|wxALIGN_TOP, 0);
    tab_automatic_deliver->SetSizer(BoxSizer6);
    BoxSizer6->Fit(tab_automatic_deliver);
    BoxSizer6->SetSizeHints(tab_automatic_deliver);
    NotebookFull->AddPage(tab_automatic_move, _("move"), false);
    NotebookFull->AddPage(tab_automatic_get, _("get"), false);
    NotebookFull->AddPage(tab_automatic_search, _("search"), false);
    NotebookFull->AddPage(tab_automatic_fetch, _("fetch"), false);
    NotebookFull->AddPage(tab_automatic_deliver, _("deliver"), false);
    button_PAUSE = new wxButton(tab_automatic, ID_BUTTON16, _("PAUSE"), wxPoint(12,400), wxSize(200,29), 0, wxDefaultValidator, _T("ID_BUTTON16"));
    button_RESUME = new wxButton(tab_automatic, ID_BUTTON17, _("RESUME"), wxPoint(224,400), wxSize(200,29), 0, wxDefaultValidator, _T("ID_BUTTON17"));
    button_RESUME->Disable();
    button_STOP = new wxButton(tab_automatic, ID_BUTTON15, _("STOP"), wxPoint(436,400), wxSize(200,29), 0, wxDefaultValidator, _T("ID_BUTTON15"));
    box_automatic_log = new wxTextCtrl(tab_automatic, ID_TEXTCTRL17, wxEmptyString, wxPoint(12,112), wxSize(624,280), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL17"));
    tab_semi = new wxPanel(tab_actions, ID_PANEL12, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL12"));
    PanelSemi_sub = new wxNotebook(tab_semi, ID_NOTEBOOK3, wxPoint(0,0), wxSize(648,400), 0, _T("ID_NOTEBOOK3"));
    tab_semi_navigation = new wxPanel(PanelSemi_sub, ID_PANEL13, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL13"));
    Panel19 = new wxPanel(tab_semi_navigation, ID_PANEL32, wxPoint(16,16), wxSize(296,40), wxTAB_TRAVERSAL, _T("ID_PANEL32"));
    Panel19->Disable();
    StaticBitmap6 = new wxStaticBitmap(Panel19, ID_STATICBITMAP9, wxBitmap(wxImage(_T("./img/off.gif"))), wxPoint(8,8), wxDefaultSize, 0, _T("ID_STATICBITMAP9"));
    StaticText15 = new wxStaticText(Panel19, ID_STATICTEXT15, _("Other..."), wxPoint(48,16), wxDefaultSize, 0, _T("ID_STATICTEXT15"));
    Button7 = new wxButton(Panel19, ID_BUTTON9, _("On/Off"), wxPoint(224,8), wxSize(64,29), 0, wxDefaultValidator, _T("ID_BUTTON9"));
    tab_semi_detection = new wxPanel(PanelSemi_sub, ID_PANEL14, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL14"));
    button_detect_objects = new wxButton(tab_semi_detection, ID_BUTTON5, _("Detect object"), wxPoint(176,16), wxSize(120,29), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    panel_detected_objects = new wxPanel(tab_semi_detection, ID_PANEL27, wxPoint(16,96), wxSize(616,216), wxTAB_TRAVERSAL, _T("ID_PANEL27"));
    StaticText12 = new wxStaticText(tab_semi_detection, ID_STATICTEXT12, _("Detected objects"), wxPoint(16,72), wxDefaultSize, 0, _T("ID_STATICTEXT12"));
    button_spawn_objects = new wxButton(tab_semi_detection, ID_BUTTON33, _("Spawn objects in RVIZ"), wxPoint(16,320), wxSize(168,29), 0, wxDefaultValidator, _T("ID_BUTTON33"));
    button_spawn_objects->Disable();
    choice_objectstodetect = new wxComboBox(tab_semi_detection, ID_COMBOBOX3, wxEmptyString, wxPoint(16,16), wxSize(152,29), 0, 0, 0, wxDefaultValidator, _T("ID_COMBOBOX3"));
    tab_semi_grasping = new wxPanel(PanelSemi_sub, ID_PANEL15, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL15"));
    tab_semi_grasping->Disable();
    panelrandom = new wxPanel(tab_semi_grasping, ID_PANEL28, wxPoint(8,8), wxSize(957,367), wxTAB_TRAVERSAL, _T("ID_PANEL28"));
    button_generate_grasps = new wxButton(panelrandom, ID_BUTTON6, _("Generate grasps"), wxPoint(152,74), wxSize(184,29), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    choice_selected_grasp_object = new wxChoice(panelrandom, ID_CHOICE1, wxPoint(16,74), wxSize(128,29), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    choice_selected_grasp_object->Append(wxEmptyString);
    choice_grasp_conf = new wxSpinCtrl(panelrandom, ID_SPINCTRL1, _T("0"), wxPoint(16,162), wxSize(47,29), 0, 0, 0, 0, _T("ID_SPINCTRL1"));
    choice_grasp_conf->SetValue(_T("0"));
    choice_grasp_conf->Disable();
    button_GraspIt = new wxButton(panelrandom, ID_BUTTON7, _("Grasp it!"), wxPoint(200,162), wxSize(136,29), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    button_GraspIt->Disable();
    box_graspResult = new wxTextCtrl(panelrandom, ID_TEXTCTRL4, _("Text"), wxPoint(72,202), wxSize(224,31), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    label_result = new wxStaticText(panelrandom, ID_STATICTEXT14, _("Result:"), wxPoint(16,210), wxDefaultSize, 0, _T("ID_STATICTEXT14"));
    panel_grasp_result = new wxPanel(panelrandom, ID_PANEL29, wxPoint(304,202), wxSize(37,42), wxTAB_TRAVERSAL, _T("ID_PANEL29"));
    img_graspResult = new wxStaticBitmap(panel_grasp_result, ID_STATICBITMAP6, wxBitmap(wxImage(_T("./img/off.gif"))), wxPoint(0,0), wxDefaultSize, 0, _T("ID_STATICBITMAP6"));
    button_simulateGrasp = new wxButton(panelrandom, ID_BUTTON22, _("Simulate grasp"), wxPoint(72,162), wxSize(120,29), 0, wxDefaultValidator, _T("ID_BUTTON22"));
    button_simulateGrasp->Disable();
    panel_tactil = new wxPanel(panelrandom, ID_PANEL40, wxPoint(368,0), wxSize(216,320), wxTAB_TRAVERSAL, _T("ID_PANEL40"));
    panel_ts11 = new wxPanel(panel_tactil, ID_PANEL45, wxPoint(16,16), wxSize(60,140), wxSIMPLE_BORDER|wxTAB_TRAVERSAL, _T("ID_PANEL45"));
    panel_ts21 = new wxPanel(panel_tactil, ID_PANEL42, wxPoint(80,16), wxSize(60,140), wxSIMPLE_BORDER|wxTAB_TRAVERSAL, _T("ID_PANEL42"));
    panel_ts31 = new wxPanel(panel_tactil, ID_PANEL39, wxPoint(144,16), wxSize(60,140), wxSIMPLE_BORDER|wxTAB_TRAVERSAL, _T("ID_PANEL39"));
    panel_ts12 = new wxPanel(panel_tactil, ID_PANEL41, wxPoint(16,160), wxSize(60,140), wxSIMPLE_BORDER|wxTAB_TRAVERSAL, _T("ID_PANEL41"));
    panel_ts22 = new wxPanel(panel_tactil, ID_PANEL43, wxPoint(80,160), wxSize(60,140), wxSIMPLE_BORDER|wxTAB_TRAVERSAL, _T("ID_PANEL43"));
    panel_ts32 = new wxPanel(panel_tactil, ID_PANEL44, wxPoint(144,160), wxSize(60,140), wxSIMPLE_BORDER|wxTAB_TRAVERSAL, _T("ID_PANEL44"));
    StaticText18 = new wxStaticText(panel_tactil, ID_STATICTEXT18, _("F2"), wxPoint(104,304), wxSize(23,17), 0, _T("ID_STATICTEXT18"));
    StaticText20 = new wxStaticText(panel_tactil, ID_STATICTEXT20, _("F3"), wxPoint(168,304), wxSize(16,19), 0, _T("ID_STATICTEXT20"));
    StaticText19 = new wxStaticText(panel_tactil, ID_STATICTEXT19, _("F1"), wxPoint(40,304), wxSize(23,17), 0, _T("ID_STATICTEXT19"));
    StaticText21 = new wxStaticText(panel_tactil, ID_STATICTEXT21, _("TACTIL SENSORS"), wxPoint(32,0), wxSize(148,28), wxSIMPLE_BORDER, _T("ID_STATICTEXT21"));
    wxFont StaticText21Font(13,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    StaticText21->SetFont(StaticText21Font);
    PanelSemi_sub->AddPage(tab_semi_navigation, _("Navigation"), false);
    PanelSemi_sub->AddPage(tab_semi_detection, _("Detection"), false);
    PanelSemi_sub->AddPage(tab_semi_grasping, _("Grasping"), false);
    tab_manual = new wxPanel(tab_actions, ID_PANEL17, wxDefaultPosition, wxSize(1066,324), wxTAB_TRAVERSAL, _T("ID_PANEL17"));
    PanelManual_sub = new wxNotebook(tab_manual, ID_NOTEBOOK5, wxPoint(0,0), wxSize(648,400), 0, _T("ID_NOTEBOOK5"));
    Panel6 = new wxPanel(PanelManual_sub, ID_PANEL23, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL23"));
    Panel6->Disable();
    Panel7 = new wxPanel(Panel6, ID_PANEL24, wxPoint(16,16), wxSize(296,40), wxTAB_TRAVERSAL, _T("ID_PANEL24"));
    Panel7->Disable();
    StaticBitmap2 = new wxStaticBitmap(Panel7, ID_STATICBITMAP3, wxBitmap(wxImage(_T("./img/off.gif"))), wxPoint(8,8), wxDefaultSize, 0, _T("ID_STATICBITMAP3"));
    StaticText9 = new wxStaticText(Panel7, ID_STATICTEXT9, _("Joystick"), wxPoint(48,16), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    Button4 = new wxButton(Panel7, ID_BUTTON3, _("On/Off"), wxPoint(224,8), wxSize(64,29), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    RadioButton2 = new wxRadioButton(Panel6, ID_RADIOBUTTON2, _("Head"), wxPoint(16,96), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON2"));
    RadioButton3 = new wxRadioButton(Panel6, ID_RADIOBUTTON3, _("Torso"), wxPoint(96,96), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON3"));
    RadioButton4 = new wxRadioButton(Panel6, ID_RADIOBUTTON4, _("Tray"), wxPoint(176,96), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON4"));
    RadioButton5 = new wxRadioButton(Panel6, ID_RADIOBUTTON5, _("Arm"), wxPoint(256,96), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON5"));
    RadioButton6 = new wxRadioButton(Panel6, ID_RADIOBUTTON6, _("Hand"), wxPoint(336,96), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON6"));
    RadioButton1 = new wxRadioButton(Panel6, ID_RADIOBUTTON1, _("Base"), wxPoint(416,96), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON1"));
    Panel8 = new wxPanel(PanelManual_sub, ID_PANEL25, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL25"));
    Panel20 = new wxPanel(Panel8, ID_PANEL33, wxPoint(16,128), wxSize(296,40), wxTAB_TRAVERSAL, _T("ID_PANEL33"));
    img_camDisplay = new wxStaticBitmap(Panel20, ID_STATICBITMAP10, wxBitmap(wxImage(_T("./img/off.gif"))), wxPoint(8,8), wxDefaultSize, 0, _T("ID_STATICBITMAP10"));
    StaticText16 = new wxStaticText(Panel20, ID_STATICTEXT16, _("Cam Display"), wxPoint(48,16), wxSize(88,17), 0, _T("ID_STATICTEXT16"));
    button_im_cam = new wxButton(Panel20, ID_BUTTON10, _("On/Off"), wxPoint(224,8), wxSize(64,29), 0, wxDefaultValidator, _T("ID_BUTTON10"));
    Panel21 = new wxPanel(Panel8, ID_PANEL34, wxPoint(16,72), wxSize(296,40), wxTAB_TRAVERSAL, _T("ID_PANEL34"));
    img_distanceVisualizer = new wxStaticBitmap(Panel21, ID_STATICBITMAP11, wxBitmap(wxImage(_T("./img/off.gif"))), wxPoint(8,8), wxDefaultSize, 0, _T("ID_STATICBITMAP11"));
    StaticText17 = new wxStaticText(Panel21, ID_STATICTEXT17, _("Distance Visualizer"), wxPoint(48,16), wxSize(144,17), 0, _T("ID_STATICTEXT17"));
    button_im_distance = new wxButton(Panel21, ID_BUTTON11, _("On/Off"), wxPoint(224,8), wxSize(64,29), 0, wxDefaultValidator, _T("ID_BUTTON11"));
    Panel9 = new wxPanel(Panel8, ID_PANEL36, wxPoint(16,240), wxSize(296,40), wxTAB_TRAVERSAL, _T("ID_PANEL36"));
    img_assisted_arm = new wxStaticBitmap(Panel9, ID_STATICBITMAP13, wxBitmap(wxImage(_T("./img/off.gif"))), wxPoint(8,8), wxDefaultSize, 0, _T("ID_STATICBITMAP13"));
    label = new wxStaticText(Panel9, ID_STATICTEXT23, _("Assisted arm navigation"), wxPoint(48,16), wxSize(168,17), 0, _T("ID_STATICTEXT23"));
    button_im_assistedarm = new wxButton(Panel9, ID_BUTTON30, _("On/Off"), wxPoint(224,8), wxSize(64,29), 0, wxDefaultValidator, _T("ID_BUTTON30"));
    Panel11 = new wxPanel(Panel8, ID_PANEL35, wxPoint(16,184), wxSize(296,40), wxTAB_TRAVERSAL, _T("ID_PANEL35"));
    img_goto = new wxStaticBitmap(Panel11, ID_STATICBITMAP12, wxBitmap(wxImage(_T("./img/off.gif"))), wxPoint(8,8), wxDefaultSize, 0, _T("ID_STATICBITMAP12"));
    StaticText22 = new wxStaticText(Panel11, ID_STATICTEXT22, _("Go to..."), wxPoint(48,16), wxSize(88,17), 0, _T("ID_STATICTEXT22"));
    button_im_goto = new wxButton(Panel11, ID_BUTTON12, _("On/Off"), wxPoint(224,8), wxSize(64,29), 0, wxDefaultValidator, _T("ID_BUTTON12"));
    Panel14 = new wxPanel(Panel8, ID_PANEL38, wxPoint(16,16), wxSize(296,40), wxTAB_TRAVERSAL, _T("ID_PANEL38"));
    img_movebase = new wxStaticBitmap(Panel14, ID_STATICBITMAP1, wxBitmap(wxImage(_T("./img/off.gif"))), wxPoint(8,8), wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
    StaticText8 = new wxStaticText(Panel14, ID_STATICTEXT8, _("Interactive teleop"), wxPoint(48,16), wxSize(160,17), 0, _T("ID_STATICTEXT8"));
    button_im_mb = new wxButton(Panel14, ID_BUTTON4, _("On/Off"), wxPoint(224,8), wxSize(64,29), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    Panel12 = new wxPanel(PanelManual_sub, ID_PANEL48, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL48"));
    Panel12->Disable();
    Panel13 = new wxPanel(Panel12, ID_PANEL50, wxPoint(16,16), wxSize(296,40), wxTAB_TRAVERSAL, _T("ID_PANEL50"));
    StaticBitmap3 = new wxStaticBitmap(Panel13, ID_STATICBITMAP5, wxBitmap(wxImage(_T("./img/off.gif"))), wxPoint(8,8), wxDefaultSize, 0, _T("ID_STATICBITMAP5"));
    StaticText10 = new wxStaticText(Panel13, ID_STATICTEXT10, _("Phantom Haptic"), wxPoint(48,16), wxDefaultSize, 0, _T("ID_STATICTEXT10"));
    Button8 = new wxButton(Panel13, ID_BUTTON23, _("On/Off"), wxPoint(224,8), wxSize(64,29), 0, wxDefaultValidator, _T("ID_BUTTON23"));
    PanelManual_sub->AddPage(Panel6, _("Joystick"), false);
    PanelManual_sub->AddPage(Panel8, _("Interactive Markers"), false);
    PanelManual_sub->AddPage(Panel12, _("Phantom Haptic"), false);
    tab_actions->AddPage(tab_automatic, _("Automatic"), false);
    tab_actions->AddPage(tab_semi, _("Semi"), false);
    tab_actions->AddPage(tab_manual, _("Manual"), false);
    BoxSizer2->Add(panel_actions, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    panel_actions_main->SetSizer(BoxSizer2);
    BoxSizer2->SetSizeHints(panel_actions_main);
    panel_status_main = new wxPanel(panel_main, ID_PANEL5, wxPoint(8,480), wxSize(1253,164), wxTAB_TRAVERSAL, _T("ID_PANEL5"));
    BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
    PanelStatus = new wxPanel(panel_status_main, ID_PANEL51, wxDefaultPosition, wxSize(811,152), wxRAISED_BORDER|wxTAB_TRAVERSAL, _T("ID_PANEL51"));
    PanelConnectionInf = new wxPanel(PanelStatus, ID_PANEL52, wxPoint(8,8), wxSize(198,140), wxTAB_TRAVERSAL, _T("ID_PANEL52"));
    StaticText3 = new wxStaticText(PanelConnectionInf, ID_STATICTEXT3, _("Robot URI"), wxPoint(8,0), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    wxFont StaticText3Font(10,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    StaticText3->SetFont(StaticText3Font);
    box_robot_URI = new wxTextCtrl(PanelConnectionInf, ID_TEXTCTRL1, _("Not connected"), wxPoint(8,16), wxSize(184,27), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    bar_battery = new wxGauge(PanelConnectionInf, ID_GAUGE1, 100, wxPoint(8,68), wxSize(90,25), 0, wxDefaultValidator, _T("ID_GAUGE1"));
    bar_battery->SetValue(55);
    StaticText2 = new wxStaticText(PanelConnectionInf, ID_STATICTEXT2, _("Battery"), wxPoint(8,52), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(10,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    bar_wifi_signal = new wxGauge(PanelConnectionInf, ID_GAUGE2, 100, wxPoint(102,68), wxSize(90,25), 0, wxDefaultValidator, _T("ID_GAUGE2"));
    bar_wifi_signal->SetValue(80);
    StaticText4 = new wxStaticText(PanelConnectionInf, ID_STATICTEXT4, _("Wifi Signal"), wxPoint(102,52), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    wxFont StaticText4Font(10,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    StaticText4->SetFont(StaticText4Font);
    label_time_battery = new wxStaticText(PanelConnectionInf, ID_STATICTEXT1, wxEmptyString, wxPoint(120,104), wxSize(80,16), 0, _T("ID_STATICTEXT1"));
    StaticText1 = new wxStaticText(PanelConnectionInf, ID_STATICTEXT24, _("Time remaining:"), wxPoint(8,104), wxDefaultSize, 0, _T("ID_STATICTEXT24"));
    Panel24 = new wxPanel(PanelStatus, ID_PANEL53, wxPoint(272,8), wxSize(748,140), wxTAB_TRAVERSAL, _T("ID_PANEL53"));
    log_box = new wxTextCtrl(Panel24, ID_TEXTCTRL2, wxEmptyString, wxPoint(0,24), wxSize(528,111), wxTE_AUTO_SCROLL|wxTE_MULTILINE|wxVSCROLL, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    StaticText6 = new wxStaticText(Panel24, ID_STATICTEXT6, _("Status log"), wxPoint(0,8), wxSize(78,9), 0, _T("ID_STATICTEXT6"));
    wxFont StaticText6Font(10,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    StaticText6->SetFont(StaticText6Font);
    BoxSizer9->Add(PanelStatus, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    panel_status_main->SetSizer(BoxSizer9);
    BoxSizer9->SetSizeHints(panel_status_main);
    panel_options_main = new wxPanel(panel_main, ID_PANEL54, wxPoint(1042,0), wxSize(306,472), wxTAB_TRAVERSAL, _T("ID_PANEL54"));
    panel_options_main->Disable();
    BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
    panel_options = new wxPanel(panel_options_main, ID_PANEL16, wxDefaultPosition, wxSize(296,469), wxTAB_TRAVERSAL, _T("ID_PANEL16"));
    tab_options = new wxNotebook(panel_options, ID_NOTEBOOK6, wxPoint(0,0), wxSize(296,472), 0, _T("ID_NOTEBOOK6"));
    panel_ROS = new wxPanel(tab_options, ID_PANEL55, wxDefaultPosition, wxSize(292,437), wxTAB_TRAVERSAL, _T("ID_PANEL55"));
    Notebook1 = new wxNotebook(panel_ROS, ID_NOTEBOOK7, wxPoint(0,0), wxSize(288,408), 0, _T("ID_NOTEBOOK7"));
    tab_nodes = new wxPanel(Notebook1, ID_PANEL57, wxDefaultPosition, wxSize(284,361), wxTAB_TRAVERSAL, _T("ID_PANEL57"));
    box_ROS_nodes = new wxTextCtrl(tab_nodes, ID_TEXTCTRL13, wxEmptyString, wxPoint(4,8), wxSize(276,360), wxTE_MULTILINE|wxHSCROLL, wxDefaultValidator, _T("ID_TEXTCTRL13"));
    tab_topics = new wxPanel(Notebook1, ID_PANEL56, wxDefaultPosition, wxSize(284,336), wxTAB_TRAVERSAL, _T("ID_PANEL56"));
    box_ROS_topics = new wxTextCtrl(tab_topics, ID_TEXTCTRL15, wxEmptyString, wxPoint(4,8), wxSize(276,360), wxTE_MULTILINE|wxHSCROLL, wxDefaultValidator, _T("ID_TEXTCTRL15"));
    tab_services = new wxPanel(Notebook1, ID_PANEL58, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL, _T("ID_PANEL58"));
    box_ROS_services = new wxTextCtrl(tab_services, ID_TEXTCTRL16, wxEmptyString, wxPoint(4,8), wxSize(276,360), wxTE_MULTILINE|wxHSCROLL, wxDefaultValidator, _T("ID_TEXTCTRL16"));
    tab_params = new wxPanel(Notebook1, ID_PANEL59, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL59"));
    box_ROS_params = new wxTextCtrl(tab_params, ID_TEXTCTRL18, wxEmptyString, wxPoint(4,8), wxSize(276,360), wxTE_MULTILINE|wxHSCROLL, wxDefaultValidator, _T("ID_TEXTCTRL18"));
    Notebook1->AddPage(tab_nodes, _("nodes"), false);
    Notebook1->AddPage(tab_topics, _("topics"), false);
    Notebook1->AddPage(tab_services, _("services"), false);
    Notebook1->AddPage(tab_params, _("params"), false);
    img_update_rosinfo = new wxBitmapButton(panel_ROS, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T("./img/update.png"))), wxPoint(262,408), wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
    img_update_rosinfo->SetFocus();
    panel_objects = new wxPanel(tab_options, ID_PANEL8, wxDefaultPosition, wxSize(292,436), wxTAB_TRAVERSAL, _T("ID_PANEL8"));
    panel_db_objects = new wxPanel(panel_objects, ID_PANEL61, wxPoint(0,256), wxSize(292,184), wxRAISED_BORDER, _T("ID_PANEL61"));
    scrollablewindow_dbobjects = new wxScrolledWindow(panel_db_objects, ID_SCROLLEDWINDOW2, wxPoint(0,0), wxSize(292,184), wxHSCROLL|wxVSCROLL, _T("ID_SCROLLEDWINDOW2"));
    StaticText24 = new wxStaticText(panel_objects, ID_STATICTEXT28, _("Database object list"), wxPoint(4,236), wxDefaultSize, 0, _T("ID_STATICTEXT28"));
    wxFont StaticText24Font(10,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    StaticText24->SetFont(StaticText24Font);
    StaticText25 = new wxStaticText(panel_objects, ID_STATICTEXT29, _("Teach new object"), wxPoint(4,0), wxDefaultSize, 0, _T("ID_STATICTEXT29"));
    wxFont StaticText25Font(10,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    StaticText25->SetFont(StaticText25Font);
    ComboBox1 = new wxComboBox(panel_objects, ID_COMBOBOX1, wxEmptyString, wxPoint(4,48), wxSize(240,29), 0, 0, 0, wxDefaultValidator, _T("ID_COMBOBOX1"));
    ComboBox1->Append(_("Rotate-on-Gripper"));
    StaticText26 = new wxStaticText(panel_objects, ID_STATICTEXT30, _("Teach new object by"), wxPoint(4,32), wxDefaultSize, 0, _T("ID_STATICTEXT30"));
    Button2 = new wxButton(panel_objects, ID_BUTTON8, _("Start"), wxPoint(244,48), wxSize(44,29), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    Button2->Disable();
    StaticLine2 = new wxStaticLine(panel_objects, ID_STATICLINE2, wxPoint(4,240), wxSize(284,24), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
    StaticLine3 = new wxStaticLine(panel_objects, ID_STATICLINE3, wxPoint(4,4), wxSize(284,24), wxLI_HORIZONTAL, _T("ID_STATICLINE3"));
    StaticLine1 = new wxStaticLine(panel_objects, ID_STATICLINE1, wxPoint(4,100), wxSize(284,24), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
    StaticText27 = new wxStaticText(panel_objects, ID_STATICTEXT31, _("Define the object"), wxPoint(4,96), wxDefaultSize, 0, _T("ID_STATICTEXT31"));
    wxFont StaticText27Font(10,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    StaticText27->SetFont(StaticText27Font);
    StaticText29 = new wxStaticText(panel_objects, ID_STATICTEXT33, _("Object name"), wxPoint(4,128), wxDefaultSize, 0, _T("ID_STATICTEXT33"));
    StaticText28 = new wxStaticText(panel_objects, ID_STATICTEXT32, _("Category"), wxPoint(144,128), wxDefaultSize, 0, _T("ID_STATICTEXT32"));
    ComboBox2 = new wxComboBox(panel_objects, ID_COMBOBOX2, wxEmptyString, wxPoint(144,144), wxSize(144,24), 0, 0, 0, wxDefaultValidator, _T("ID_COMBOBOX2"));
    ComboBox2->Append(_("bottles"));
    ComboBox2->Append(_("cups"));
    ComboBox2->Append(_("drugs"));
    TextCtrl1 = new wxTextCtrl(panel_objects, ID_TEXTCTRL19, wxEmptyString, wxPoint(4,144), wxSize(140,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL19"));
    Button5 = new wxButton(panel_objects, ID_BUTTON21, _("Save"), wxPoint(88,168), wxSize(56,29), 0, wxDefaultValidator, _T("ID_BUTTON21"));
    Button5->Disable();
    Button3 = new wxButton(panel_objects, ID_BUTTON20, _("Cancel"), wxPoint(144,168), wxSize(56,29), 0, wxDefaultValidator, _T("ID_BUTTON20"));
    Button3->Disable();
    panel_tasks = new wxPanel(tab_options, ID_PANEL26, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL26"));
    tab_options->AddPage(panel_ROS, _("ROS"), false);
    tab_options->AddPage(panel_objects, _("Objects"), false);
    tab_options->AddPage(panel_tasks, _("Tasks"), false);
    BoxSizer10->Add(panel_options, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    panel_options_main->SetSizer(BoxSizer10);
    BoxSizer10->SetSizeHints(panel_options_main);
    panel_ontray_main = new wxPanel(panel_main, ID_PANEL31, wxPoint(1048,488), wxSize(292,148), wxRAISED_BORDER|wxTAB_TRAVERSAL, _T("ID_PANEL31"));
    panel_ontray_main->Disable();
    StaticText23 = new wxStaticText(panel_ontray_main, ID_STATICTEXT26, _("Objects on tray"), wxPoint(4,4), wxDefaultSize, 0, _T("ID_STATICTEXT26"));
    label_ontray = new wxStaticText(panel_ontray_main, ID_STATICTEXT27, _("(0)"), wxPoint(116,4), wxDefaultSize, 0, _T("ID_STATICTEXT27"));
    wxFont label_ontrayFont(10,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    label_ontray->SetFont(label_ontrayFont);
    panel_objects_on_tray = new wxPanel(panel_ontray_main, ID_PANEL1, wxPoint(2,32), wxSize(284,110), wxRAISED_BORDER, _T("ID_PANEL1"));
    scrollablewindow_ontray = new wxScrolledWindow(panel_objects_on_tray, ID_SCROLLEDWINDOW1, wxPoint(0,0), wxSize(292,144), wxHSCROLL|wxVSCROLL, _T("ID_SCROLLEDWINDOW1"));
    img_update_ontray = new wxBitmapButton(panel_ontray_main, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("./img/update.png"))), wxPoint(260,0), wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu6 = new wxMenu();
    menu_skype = new wxMenu();
    option_skype_start = new wxMenuItem(menu_skype, ID_MENUITEM10, _("Start"), wxEmptyString, wxITEM_NORMAL);
    menu_skype->Append(option_skype_start);
    option_skype_start->Enable(false);
    menu_skype->AppendSeparator();
    MenuItem12 = new wxMenuItem(menu_skype, ID_MENUITEM11, _("Reinitialize"), wxEmptyString, wxITEM_NORMAL);
    menu_skype->Append(MenuItem12);
    Menu6->Append(ID_MENUITEM13, _("Skype"), menu_skype, wxEmptyString);
    menu_rviz = new wxMenu();
    menu_rviz_run = new wxMenuItem(menu_rviz, ID_MENUITEM1, _("Run"), _("Run run run!"), wxITEM_NORMAL);
    menu_rviz->Append(menu_rviz_run);
    menu_rviz_run->Enable(false);
    menu_rviz->AppendSeparator();
    menu_rviz_vis = new wxMenu();
    MenuItem5 = new wxMenuItem(menu_rviz_vis, ID_MENUITEM3, _("Distance"), wxEmptyString, wxITEM_NORMAL);
    menu_rviz_vis->Append(MenuItem5);
    MenuItem8 = new wxMenuItem(menu_rviz_vis, ID_MENUITEM6, _("Cam display"), wxEmptyString, wxITEM_NORMAL);
    menu_rviz_vis->Append(MenuItem8);
    Menu5 = new wxMenu();
    MenuItem17 = new wxMenu();
    MenuItem15 = new wxMenuItem(MenuItem17, ID_MENUITEM17, _("Movable objects"), wxEmptyString, wxITEM_NORMAL);
    MenuItem17->Append(MenuItem15);
    MenuItem16 = new wxMenuItem(MenuItem17, ID_MENUITEM18, _("Furniture objects"), wxEmptyString, wxITEM_NORMAL);
    MenuItem17->Append(MenuItem16);
    Menu5->Append(ID_MENUITEM19, _("Add"), MenuItem17, wxEmptyString);
    MenuItem18 = new wxMenu();
    MenuItem19 = new wxMenuItem(MenuItem18, ID_MENUITEM21, _("Movable objects"), wxEmptyString, wxITEM_NORMAL);
    MenuItem18->Append(MenuItem19);
    MenuItem20 = new wxMenuItem(MenuItem18, ID_MENUITEM22, _("Furniture objects"), wxEmptyString, wxITEM_NORMAL);
    MenuItem18->Append(MenuItem20);
    Menu5->Append(ID_MENUITEM20, _("Remove"), MenuItem18, wxEmptyString);
    menu_rviz_vis->Append(ID_MENUITEM16, _("Spawn objects"), Menu5, wxEmptyString);
    menu_rviz->Append(ID_MENUITEM2, _("Visualization"), menu_rviz_vis, wxEmptyString);
    menu_rviz_manip = new wxMenu();
    MenuItem11 = new wxMenuItem(menu_rviz_manip, ID_MENUITEM9, _("Assisted arm navigation"), wxEmptyString, wxITEM_NORMAL);
    menu_rviz_manip->Append(MenuItem11);
    MenuItem7 = new wxMenuItem(menu_rviz_manip, ID_MENUITEM5, _("Move base"), wxEmptyString, wxITEM_NORMAL);
    menu_rviz_manip->Append(MenuItem7);
    MenuItem9 = new wxMenuItem(menu_rviz_manip, ID_MENUITEM7, _("Go to..."), wxEmptyString, wxITEM_NORMAL);
    menu_rviz_manip->Append(MenuItem9);
    menu_rviz->Append(ID_MENUITEM4, _("Manipulation"), menu_rviz_manip, wxEmptyString);
    Menu6->Append(ID_MENUITEM12, _("Rviz"), menu_rviz, wxEmptyString);
    menu_dashboard = new wxMenu();
    menu_dashboard_run = new wxMenuItem(menu_dashboard, ID_MENUITEM15, _("Run"), wxEmptyString, wxITEM_NORMAL);
    menu_dashboard->Append(menu_dashboard_run);
    menu_dashboard_run->Enable(false);
    Menu6->Append(ID_MENUITEM14, _("Dashboard"), menu_dashboard, wxEmptyString);
    MenuBar1->Append(Menu6, _("Tools"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    Timer1.SetOwner(this, ID_TIMER1);
    timer_URI.SetOwner(this, ID_TIMER2);
    timer_RequestsEvent.SetOwner(this, ID_TIMER3);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -10 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    timer_skype_contacts.SetOwner(this, ID_TIMER4);
    timer_ROS.SetOwner(this, ID_TIMER5);
    timer_choice.SetOwner(this, ID_TIMER6);

    Connect(ID_GRID1,wxEVT_GRID_CELL_LEFT_DCLICK,(wxObjectEventFunction)&srs_ui_proFrame::Ongrid_requestsCellLeftDClick);
    Connect(ID_GRID1,wxEVT_GRID_LABEL_LEFT_DCLICK,(wxObjectEventFunction)&srs_ui_proFrame::Ongrid_request_eventsLabelLeftDClick);
    Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_ITEM_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::showContextualMenu);
    Connect(ID_LISTCTRL2,wxEVT_COMMAND_LIST_ITEM_ACTIVATED,(wxObjectEventFunction)&srs_ui_proFrame::acceptCall);
    Connect(ID_BUTTON14,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_move_STARTClick);
    Connect(ID_CHOICE3,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::Onchoice_automatic_moveSelect);
    Connect(ID_BUTTON13,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_get_STARTClick);
    Connect(ID_CHOICE8,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::Onchoice_automatic_getSelect);
    Connect(ID_CHOICE4,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::Onchoice_automatic_getSelect);
    Connect(ID_BUTTON19,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_search_STARTClick);
    Connect(ID_CHOICE7,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::Onchoice_automatic_searchSelect);
    Connect(ID_CHOICE5,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::Onchoice_automatic_searchSelect);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_fetch_STARTClick);
    Connect(ID_CHOICE10,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::Onchoice_automatic_fetchSelect);
    Connect(ID_CHOICE9,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::Onchoice_automatic_fetchSelect);
    Connect(ID_CHOICE2,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::Onchoice_automatic_fetchSelect);
    Connect(ID_BUTTON25,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_deliver_STARTClick);
    Connect(ID_CHOICE12,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::Onchoice_automatic_deliverSelect);
    Connect(ID_CHOICE11,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::Onchoice_automatic_deliverSelect);
    Connect(ID_CHOICE6,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::Onchoice_automatic_deliverSelect);
    Connect(ID_BUTTON16,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_DMPauseClick);
    Connect(ID_BUTTON17,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_DMResumeClick);
    Connect(ID_BUTTON15,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_DMStopClick);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::DetectObjects);
    Connect(ID_BUTTON33,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_spawn_objectsClick);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_GenerateGraspsClick);
    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_GraspItClick);
    Connect(ID_BUTTON22,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_simulateGraspClick);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::manual_joystickButton);
    Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_im_camClick);
    Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_im_distanceClick);
    Connect(ID_BUTTON30,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_im_assistedarmClick);
    Connect(ID_BUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_im_gotoClick);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::manual_moveBaseButton);
    Connect(ID_BUTTON23,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::manual_phantomHapticButton);
    Connect(ID_BITMAPBUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onimg_update_rosinfoClick);
    Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::Onimg_update_ontrayClick);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::OnQuit);
    Connect(ID_MENUITEM10,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::OnMenuSkypeStart);
    Connect(ID_MENUITEM11,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::ReinitializeSkype);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::runRviz);
    Connect(ID_MENUITEM3,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_im_distanceClick);
    Connect(ID_MENUITEM6,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_im_camClick);
    Connect(ID_MENUITEM17,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::spawnDetectedObjects);
    Connect(ID_MENUITEM18,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::spawnobjects);
    Connect(ID_MENUITEM21,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::removeDetectedObjects);
    Connect(ID_MENUITEM22,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::removeObjects);
    Connect(ID_MENUITEM9,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_im_assistedarmClick);
    Connect(ID_MENUITEM5,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::manual_moveBaseButton);
    Connect(ID_MENUITEM7,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::Onbutton_im_gotoClick);
    Connect(ID_MENUITEM15,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::runDashboard);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::OnAbout);
    Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&srs_ui_proFrame::OnTimer1Trigger);
    Connect(ID_TIMER2,wxEVT_TIMER,(wxObjectEventFunction)&srs_ui_proFrame::Ontimer_URITrigger);
    Connect(ID_TIMER3,wxEVT_TIMER,(wxObjectEventFunction)&srs_ui_proFrame::Ontimer_RequestsEventTrigger1);
    Connect(ID_TIMER4,wxEVT_TIMER,(wxObjectEventFunction)&srs_ui_proFrame::Onskype_timerTrigger1);
    Connect(ID_TIMER5,wxEVT_TIMER,(wxObjectEventFunction)&srs_ui_proFrame::Ontimer_ROSTrigger);
    Connect(ID_TIMER6,wxEVT_TIMER,(wxObjectEventFunction)&srs_ui_proFrame::Ontimer_choiceTrigger);
    //*)

    stopTimers();
    Initialize();
    InitSkype();
}

srs_ui_proFrame::~srs_ui_proFrame()
{
    PM->ExitAll();
    Ri->IP_RemoveAllObjects();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void srs_ui_proFrame::Initialize()
{
    RosInterface::init();
    SF = new SkypeFunctions();
    PM = new ProcessManager();
    num_events = 0;
    dm_working = false;
    run_notification = false;
    last_chat_user = "";

    InitTactileSensorSimulator();
    InitSkypeNotebooks();
}

void srs_ui_proFrame::InitTactileSensorSimulator()
{
    int x,y;
    x = 0;
    y = 0;

    for (unsigned int i=0; i<14; i++)
    {
        for (unsigned int j=0; j<6; j++)
        {
            ts_finger11.push_back(new wxStaticBitmap(panel_ts11, wxNewId(), wxBitmap(wxImage(_T("./img/ts_off.png"))), wxPoint(x,y), wxDefaultSize, 0, _T("ID_STATICBITMAP12")));
            ts_finger12.push_back(new wxStaticBitmap(panel_ts12, wxNewId(), wxBitmap(wxImage(_T("./img/ts_off.png"))), wxPoint(x,y), wxDefaultSize, 0, _T("ID_STATICBITMAP12")));
            ts_finger21.push_back(new wxStaticBitmap(panel_ts21, wxNewId(), wxBitmap(wxImage(_T("./img/ts_off.png"))), wxPoint(x,y), wxDefaultSize, 0, _T("ID_STATICBITMAP12")));
            ts_finger22.push_back(new wxStaticBitmap(panel_ts22, wxNewId(), wxBitmap(wxImage(_T("./img/ts_off.png"))), wxPoint(x,y), wxDefaultSize, 0, _T("ID_STATICBITMAP12")));
            ts_finger31.push_back(new wxStaticBitmap(panel_ts31, wxNewId(), wxBitmap(wxImage(_T("./img/ts_off.png"))), wxPoint(x,y), wxDefaultSize, 0, _T("ID_STATICBITMAP12")));
            ts_finger32.push_back(new wxStaticBitmap(panel_ts32, wxNewId(), wxBitmap(wxImage(_T("./img/ts_off.png"))), wxPoint(x,y), wxDefaultSize, 0, _T("ID_STATICBITMAP12")));
            x+=10;
        }
        x=0;
        y+=10;
    }
}

void srs_ui_proFrame::LoadDBObjects()
{
    try
    {
        scrollablewindow_dbobjects->Scroll(0,0);
        std::vector<wxImage> oot = Ri->getAllDBImages();


        for (unsigned int i=0; i<img_db_objects.size(); i++)
            delete img_db_objects[i];
        img_db_objects.resize(0);

        int x=8, y=0;
        for (unsigned int i=0; i<oot.size(); i++)
        {
            if (i>0 && i%3==0)
            {
                x=8; y+=96;
            }
            std::string img_name = "img_auto_"+i;
            oot[i].Rescale(82, 82);
            wxBitmapButton *img = new wxBitmapButton(scrollablewindow_dbobjects, wxNewId(), wxBitmap(oot[i]), wxPoint(x,y), wxSize(82,82), wxBU_AUTODRAW, wxDefaultValidator, toWXString(img_name));
            img_db_objects.push_back(img);
            x+=94;
        }
        scrollablewindow_dbobjects->SetScrollbars(0, 5, 0, (y+94+8)/5);
    }
    catch(ServiceUnavailable &e) {writeInLog(e.getMessage()); }
    catch(ServiceCallFailed &e) {writeInLog(e.getMessage()); }
    catch(std::exception &e) {writeInLog(); }
}

void srs_ui_proFrame::stopTimers()
{
    timer_ROS.Stop();
    timer_URI.Stop();
    timer_RequestsEvent.Stop();
    Timer1.Stop();
    timer_skype_contacts.Stop();
    timer_choice.Stop();
}

std::string srs_ui_proFrame::toString(wxString wx)
{
    return std::string(wx.mb_str());
}

std::string srs_ui_proFrame::toString(float f)
{
    std::stringstream aux;
    aux << f;
    return aux.str().c_str();
}

std::string srs_ui_proFrame::toStringN(wxString wx)
{
    return toString(wx)+"\n";
}

wxString srs_ui_proFrame::toWXString(std::string s)
{
    return wxString(s.c_str(), wxConvUTF8);
}

wxString srs_ui_proFrame::toWXString(float f)
{
    std::stringstream aux;
    aux << f;
    return toWXString(aux.str().c_str());
}

wxString srs_ui_proFrame::toWXStringN(std::string s)
{
    s+="\n";
    return toWXString(s);
}

bool srs_ui_proFrame::toFloat(std::string str, float &f)
{
    if (str.size() == 0)
        return false;

    char *s = new char[str.length() + 1];
    strcpy(s, str.c_str());

    int num_separators = 0;

    for (unsigned int i=0; i<str.size(); i++)
    {
        if (s[i] == ',' || s[i] == '.')
        {
            s[i] = '.';
            num_separators++;
            if (i == 0 || num_separators>1)
                return false;
        }
        else if (s[i] < '0' || s[i] > '9')
            return false;

    }

    f = atof(s);
    return true;
}

bool srs_ui_proFrame::toFloat(wxString wx, float &f)
{
    return toFloat(toString(wx), f);
}

void srs_ui_proFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void srs_ui_proFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void srs_ui_proFrame::InitPredefinedPoses()
{
    bool throw_timer = true;
    try
    {
        std::vector<std::string> poses = Ri->get_predefined_poses();
        std::vector<std::string> objects = Ri->get_objects_on_map();
        std::vector<std::string> workspaces = Ri->get_workspace_on_map();

        for (unsigned int i=0; i<poses.size(); i++)
        {
            choice_automatic_move->Append(toWXString(poses[i]));
            choice_automatic_fetch_order->Append(toWXString(poses[i]));
            choice_automatic_deliver_deliver_position->Append(toWXString(poses[i]));
        }

        for (unsigned int i=0; i<objects.size(); i++)
        {
            choice_automatic_get->Append(toWXString(objects[i]));
            choice_automatic_search->Append(toWXString(objects[i]));
            choice_automatic_fetch->Append(toWXString(objects[i]));
            choice_automatic_deliver->Append(toWXString(objects[i]));
            choice_objectstodetect->Append(toWXString(objects[i]));
        }

        for (unsigned int i=0; i<workspaces.size(); i++)
        {
            choice_automatic_get_search->Append(toWXString(workspaces[i]));
            choice_automatic_search_search->Append(toWXString(workspaces[i]));
            choice_automatic_fetch_search->Append(toWXString(workspaces[i]));
            choice_automatic_deliver_search->Append(toWXString(workspaces[i]));
        }


        throw_timer = false;
        if (timer_choice.IsRunning())
            timer_choice.Stop();
    }
    catch(ServiceUnavailable &e){  if (!timer_choice.IsRunning()) writeInLog(e.getMessage());   }
    catch(ServiceCallFailed &e) {  if (!timer_choice.IsRunning()) writeInLog(e.getMessage());   }
    catch(std::exception &e)    {  if (!timer_choice.IsRunning()) writeInLog();                 }

    if (throw_timer && !timer_choice.IsRunning())
        timer_choice.Start(10000, false);
}

void srs_ui_proFrame::UpdateTactilSensorSimulator()
{
    //TODO: Read TS
    RosInterface::tactil_data tactil_data = Ri->getTactilSensorData();

    wxBitmap off(wxImage(_T("./img/ts_off.png")));
    wxBitmap on_red(wxImage(_T("./img/ts_on_red.png")));
    wxBitmap on_orange(wxImage(_T("./img/ts_on_orange.png")));
    wxBitmap on_yellow(wxImage(_T("./img/ts_on_yellow.png")));
    wxBitmap on_yellow2(wxImage(_T("./img/ts_on_yellow2.png")));
    wxBitmap on_white(wxImage(_T("./img/ts_on_white.png")));


    for (unsigned int i=0; i<tactil_data.m1.size(); i++)
    {
        //m1
        if (tactil_data.m1[i]>3500)
            ts_finger11[i]->SetBitmap(on_red);
        else if (tactil_data.m1[i]>2500)
            ts_finger11[i]->SetBitmap(on_orange);
        else if (tactil_data.m1[i]>1500)
            ts_finger11[i]->SetBitmap(on_yellow);
        else if (tactil_data.m1[i]>500)
            ts_finger11[i]->SetBitmap(on_yellow2);
        else if (tactil_data.m1[i]>0)
            ts_finger11[i]->SetBitmap(on_white);
        else
            ts_finger11[i]->SetBitmap(off);

        //m2
        if (tactil_data.m2[i]>3500)
            ts_finger12[i]->SetBitmap(on_red);
        else if (tactil_data.m2[i]>2500)
            ts_finger12[i]->SetBitmap(on_orange);
        else if (tactil_data.m2[i]>1500)
            ts_finger12[i]->SetBitmap(on_yellow);
        else if (tactil_data.m2[i]>500)
            ts_finger12[i]->SetBitmap(on_yellow2);
        else if (tactil_data.m2[i]>0)
            ts_finger12[i]->SetBitmap(on_white);
        else
            ts_finger12[i]->SetBitmap(off);

        //m3
        if (tactil_data.m3[i]>3500)
            ts_finger21[i]->SetBitmap(on_red);
        else if (tactil_data.m3[i]>2500)
            ts_finger21[i]->SetBitmap(on_orange);
        else if (tactil_data.m3[i]>1500)
            ts_finger21[i]->SetBitmap(on_yellow);
        else if (tactil_data.m3[i]>500)
            ts_finger21[i]->SetBitmap(on_yellow2);
        else if (tactil_data.m3[i]>0)
            ts_finger21[i]->SetBitmap(on_white);
        else
            ts_finger21[i]->SetBitmap(off);

        //m4
        if (tactil_data.m4[i]>3500)
            ts_finger22[i]->SetBitmap(on_red);
        else if (tactil_data.m4[i]>2500)
            ts_finger22[i]->SetBitmap(on_orange);
        else if (tactil_data.m4[i]>1500)
            ts_finger22[i]->SetBitmap(on_yellow);
        else if (tactil_data.m4[i]>500)
            ts_finger22[i]->SetBitmap(on_yellow2);
        else if (tactil_data.m4[i]>0)
            ts_finger22[i]->SetBitmap(on_white);
        else
            ts_finger22[i]->SetBitmap(off);

        //m5
        if (tactil_data.m5[i]>3500)
            ts_finger31[i]->SetBitmap(on_red);
        else if (tactil_data.m5[i]>2500)
            ts_finger31[i]->SetBitmap(on_orange);
        else if (tactil_data.m5[i]>1500)
            ts_finger31[i]->SetBitmap(on_yellow);
        else if (tactil_data.m5[i]>500)
            ts_finger31[i]->SetBitmap(on_yellow2);
        else if (tactil_data.m5[i]>0)
            ts_finger31[i]->SetBitmap(on_white);
        else
            ts_finger31[i]->SetBitmap(off);

        //m6
        if (tactil_data.m6[i]>3500)
            ts_finger32[i]->SetBitmap(on_red);
        else if (tactil_data.m6[i]>2500)
            ts_finger32[i]->SetBitmap(on_orange);
        else if (tactil_data.m6[i]>1500)
            ts_finger32[i]->SetBitmap(on_yellow);
        else if (tactil_data.m6[i]>500)
            ts_finger32[i]->SetBitmap(on_yellow2);
        else if (tactil_data.m6[i]>0)
            ts_finger32[i]->SetBitmap(on_white);
        else
            ts_finger32[i]->SetBitmap(off);
    }
}

void srs_ui_proFrame::UpdateRobotStatus()
{
    pr2_msgs::PowerState ps = Ri->getPowerState();
    bar_battery->SetValue(ps.relative_capacity);

    int time = ps.time_remaining.sec;
    std::stringstream aux;
    aux << time;
    label_time_battery->SetLabel(toWXString(aux.str()));

    //pr2_msgs::AccessPoint ws = Ri->getWifiState();
    //bar_wifi_signal->SetValue(ws.signal);
}

void srs_ui_proFrame::UpdateIMGs()
{
    wxBitmap img_on(wxImage(_T("./img/on.gif")));
    wxBitmap img_off(wxImage(_T("./img/off.gif")));

    if (PM->WaitIM_goTo() == -4)
        img_goto->SetBitmap(img_on);
    else
        img_goto->SetBitmap(img_off);

    if (PM->WaitIM_moveBase() == -4)
        img_movebase->SetBitmap(img_on);
    else
        img_movebase->SetBitmap(img_off);

    if (PM->WaitIM_distanceViewer() == -4)
        img_distanceVisualizer->SetBitmap(img_on);
    else
        img_distanceVisualizer->SetBitmap(img_off);

    if (PM->WaitIM_camDisplay() == -4)
        img_camDisplay->SetBitmap(img_on);
    else
        img_camDisplay->SetBitmap(img_off);

    if (PM->WaitIM_AssistedArmNavigation() == -4)
        img_assisted_arm->SetBitmap(img_on);
    else
        img_assisted_arm->SetBitmap(img_off);
}

void srs_ui_proFrame::runRviz(wxCommandEvent& event)
{
    PM->ExecRviz(RVIZ_CONFIG_FILE);
    sleep(1);
    button_spawn_objects->Enable();
}

void srs_ui_proFrame::Onbutton_GenerateGraspsClick(wxCommandEvent& event)
{
    wxMessageBox( wxT("The graspings will be generated in second plane. When the process finish, you will be notified."), wxT("SRS_UI_PRO: Grasp generation."), wxICON_INFORMATION);
    pthread_t thread1;
    pthread_create(&thread1, NULL, &srs_ui_proFrame::THREAD_GenerateGrasps, (void*)this);
    //pthread_join(thread1, NULL);
    //wxMessageBox(wxT("Has finished!"), wxT("SRS_UI_PRO: Grasp generation."), wxICON_INFORMATION);
}

void srs_ui_proFrame::Onbutton_GraspItClick(wxCommandEvent& event)
{
    bool res = Ri->GraspIt(generated_grasps[choice_grasp_conf->GetValue()]);

    if (res)
    {
        int number_of_fingers = Ri->howManyFingersHasTheGrasp();
        std::stringstream aux;
        aux << number_of_fingers;

        std::string aux2 = "The hand is grasping the object with " + aux.str() + " fingers.";
        box_graspResult->SetValue(toWXString(aux2));
        wxBitmap img_on(wxImage(_T("./img/on.gif")));
        img_graspResult->SetBitmap(img_on);
    }
    else
    {
        box_graspResult->SetValue(_T("Failed grasp."));
        wxBitmap img_off(wxImage(_T("./img/off.gif")));
        img_graspResult->SetBitmap(img_off);
    }
}

void srs_ui_proFrame::Onbutton_simulateGraspClick(wxCommandEvent& event)
{
    pthread_t thread1;
    pthread_create(&thread1, NULL, &srs_ui_proFrame::THREAD_GraspSimulator, (void*)this);
}

void srs_ui_proFrame::Onbutton_DMPauseClick(wxCommandEvent& event)
{
    pthread_t thread1;

    dm_thread_arg *arg = new dm_thread_arg;
        arg->form = this;
        arg->action = "pause";

    pthread_create(&thread1, NULL, &srs_ui_proFrame::THREAD_DMAction, (void*)arg);
    dm_working = false;//dm_move_working = dm_get_working = dm_fetch_working = dm_search_working = dm_deliver_working = false;

    wxButton *r = (wxButton *)event.GetEventObject();
    std::string dm_parent = toString(r->GetName());

    writeInDMLog("PAUSED", BLUE);
    button_PAUSE->Disable();
    button_RESUME->Enable();
    //pthread_join(thread1, NULL);
}

void srs_ui_proFrame::Onbutton_DMResumeClick(wxCommandEvent& event)
{
    pthread_t thread1;

    dm_thread_arg *arg = new dm_thread_arg;
        arg->form = this;
        arg->action = "resume";

    pthread_create(&thread1, NULL, &srs_ui_proFrame::THREAD_DMAction, (void*)arg);

    wxButton *r = (wxButton *)event.GetEventObject();
    std::string dm_parent = toString(r->GetName());

    dm_working = true;//dm_move_working = dm_get_working = dm_fetch_working = dm_search_working = dm_deliver_working = true;

    writeInDMLog("RESUME", BLUE);
    button_PAUSE->Enable();
    button_RESUME->Disable();
}

void srs_ui_proFrame::Onbutton_DMStopClick(wxCommandEvent& event)
{
    pthread_t thread1;

    dm_thread_arg *arg = new dm_thread_arg;
        arg->form = this;
        arg->action = "stop";

    pthread_create(&thread1, NULL, &srs_ui_proFrame::THREAD_DMAction, (void*)arg);
    dm_working = false;//dm_move_working = dm_get_working = dm_fetch_working = dm_search_working = dm_deliver_working = false;

    wxButton *r = (wxButton *)event.GetEventObject();
    std::string dm_parent = toString(r->GetName());

    writeInDMLog("STOPPED", BLUE);
    button_PAUSE->Enable();
    button_RESUME->Disable();
}

void srs_ui_proFrame::Onbutton_im_distanceClick(wxCommandEvent& event)
{
    if (PM->WaitIM_distanceViewer() == -4)
        PM->ExitIM_distanceViewer();
    else
        PM->ExecIM_distanceViewer();
}

void srs_ui_proFrame::Onbutton_im_camClick(wxCommandEvent& event)
{
    if (PM->WaitIM_camDisplay() == -4)
        PM->ExitIM_camDisplay();
    else
        PM->ExecIM_camDisplay();
}

void srs_ui_proFrame::Onbutton_im_gotoClick(wxCommandEvent& event)
{
    if (PM->WaitIM_goTo() == -4)
        PM->ExitIM_goTo();
    else
        PM->ExecIM_goTo();
}

void srs_ui_proFrame::semi_goToButton(wxCommandEvent& event)
{
    if (PM->WaitIM_goTo() == -4)
        PM->ExitIM_goTo();
    else
        PM->ExecIM_goTo();
}

void srs_ui_proFrame::manual_moveBaseButton(wxCommandEvent& event)
{
    if (PM->WaitIM_moveBase() == -4)
        PM->ExitIM_moveBase();
    else
        PM->ExecIM_moveBase();
}

void srs_ui_proFrame::manual_joystickButton(wxCommandEvent& event)
{
    //TODO
}

void srs_ui_proFrame::manual_phantomHapticButton(wxCommandEvent& event)
{
    //TODO
}

void srs_ui_proFrame::DetectObjects(wxCommandEvent& event)
{
    //std::vector<std::string> objet_models = Ri->getGazeboModels();
    long id = -1;
    if (choice_objectstodetect->GetCurrentSelection() == -1)
        wxMessageBox(wxT("You must select a target value!\t"), wxT("srs_ui_pro"), wxICON_INFORMATION);
    else
    {
        std::vector<std::string> objet_models;
        std::string object_to_detect = toString(choice_objectstodetect->GetStringSelection());
        objet_models.push_back(object_to_detect);

        for (unsigned int i=0; i<img_objects.size(); i++)
            delete img_objects[i];

        choice_selected_grasp_object->Clear();
        img_objects.clear();
        detected_objects.clear();

        img_objects.resize(objet_models.size());
        int x = 8;

        for (unsigned int i=0; i<objet_models.size(); i++)
        {
            //std::string object_name = (std::string((wxString(objet_models[i].c_str(), wxConvUTF8)).mb_str(wxConvUTF8)));
            std::string object_name = objet_models[i].c_str();
            try
            {
                cob_object_detection_msgs::Detection obj_info = Ri->Detect(object_name);
                if (obj_info.label != "")
                {
                    detected_objects.push_back(obj_info);
                    int object_id = Ri->getObjectId(objet_models[i].c_str());
                    std::string path = "./img/" + objet_models[i] + ".jpg";
                    wxImage objectIMG = Ri->getObjectIMG(object_id);
                    objectIMG.Rescale(95, 95);

                    wxString final_path = toWXString(path);
                    wxBitmapButton *img = new wxBitmapButton(panel_detected_objects, id, wxBitmap(objectIMG), wxPoint(x,16), wxSize(125,125), wxBU_AUTODRAW, wxDefaultValidator, toWXString(objet_models[i]));
                    img_objects.push_back(img);
                    x+=260;

                    choice_selected_grasp_object->Append(toWXString(objet_models[i]));
                    id = wxNewId();
                    Connect(id ,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&srs_ui_proFrame::object_info);
                }
                else
                {
                    std::string aux_msg = "[INFO] Can't detect the " + object_name + " object.\n";
                    writeInLog(aux_msg);
                }

            }
            catch(ServiceUnavailable &e) { writeInLog(e.getMessage()); }
            catch(ServiceCallFailed &e) {  writeInLog(e.getMessage()); }
            catch(std::exception &e) { writeInLog(); }
        }

        if (id != -1)
            tab_semi_grasping->Enable();
        else
            tab_semi_grasping->Disable();
    }

}

void srs_ui_proFrame::object_info(wxCommandEvent& event)
{
    wxBitmapButton *r = (wxBitmapButton *)event.GetEventObject();
    ObjectInfo *Frame = new ObjectInfo(0, Ri, detected_objects[r->GetId()]);
    Frame->Show(TRUE);
}

void srs_ui_proFrame::StartClick(wxCommandEvent& event)
{
    //Connect to URI
    timer_URI.Start(1000, false);
    //timer_ROS.Start(500, false);
    //timer_RequestsEvent.Start(5000,false);
}

void srs_ui_proFrame::Onbutton_im_assistedarmClick(wxCommandEvent& event)
{
    if (PM->WaitIM_AssistedArmNavigation() == -4)
        PM->ExitIM_AssistedArmNavigation();
    else
    {
        PM->ExecIM_AssistedArmNavigation();

        pthread_t thread1;
        pthread_create(&thread1, NULL, &srs_ui_proFrame::THREAD_StartAssistedArm, (void*)this);
    }

}

void srs_ui_proFrame::Ongrid_request_eventsLabelLeftDClick(wxGridEvent& event)
{
    if ((grid_requests->GetSelectedRows()).size() > 0)
    {
        int row = grid_requests->GetSelectedRows()[0];
        std::string ros_uri = toString(grid_requests->GetCellValue(row,1));
        ROS_ERROR("Fake connection to %s", ros_uri.c_str());
        //TODO: Connect to this URI.
    }
}

void srs_ui_proFrame::runDashboard(wxCommandEvent& event)
{
    PM->ExecDashboard();
}

void srs_ui_proFrame::Onbutton_move_STARTClick(wxCommandEvent& event)
{
    if (choice_automatic_move->GetCurrentSelection() == -1)
        wxMessageBox(wxT("You must select a target value!\t"), wxT("SRS_DECISION_MAKING"), wxICON_INFORMATION);
    else
    {
        pthread_t thread1;

        dm_thread_arg *arg = new dm_thread_arg;
            arg->form = this;
            arg->action = "move";
            arg->parameters = toString(choice_automatic_move->GetStringSelection());

            dm_working = true;
            //dm_move_working = true;
            pthread_create(&thread1, NULL, &srs_ui_proFrame::THREAD_DMAction, (void*)arg);
            writeInDMLog(toString(box_automatic_move_small->GetValue()));
    }
}

void srs_ui_proFrame::Onbutton_search_STARTClick(wxCommandEvent& event)
{
    if (choice_automatic_search->GetCurrentSelection() == -1)
        wxMessageBox(wxT("You must select a target value!\t"), wxT("SRS_DECISION_MAKING"), wxICON_INFORMATION);
    else
    {
        pthread_t thread1;

        dm_thread_arg *arg = new dm_thread_arg;
            arg->form = this;
            arg->action = "search";
            std::string aux, aux2;
            aux2 = (choice_automatic_search_search->GetCurrentSelection() == -1)?"":"%" + toString(choice_automatic_search_search->GetStringSelection());
            aux = toString(choice_automatic_search->GetStringSelection())+aux2;
            arg->parameters = aux;

        dm_working = true;
        //dm_search_working = true;
        pthread_create(&thread1, NULL, &srs_ui_proFrame::THREAD_DMAction, (void*)arg);
        writeInDMLog(toString(box_automatic_search_small->GetValue()));
    }
}

void srs_ui_proFrame::Onbutton_get_STARTClick(wxCommandEvent& event)
{
    if (choice_automatic_get->GetCurrentSelection() == -1)
        wxMessageBox(wxT("You must select a target value!\t"), wxT("SRS_DECISION_MAKING"), wxICON_INFORMATION);
    else
    {
        pthread_t thread1;

        dm_thread_arg *arg = new dm_thread_arg;
            arg->form = this;
            arg->action = "get";
            std::string aux, aux2;
            aux2 = (choice_automatic_get_search->GetCurrentSelection() == -1)?"":"%" + toString(choice_automatic_get_search->GetStringSelection());
            aux = toString(choice_automatic_get->GetStringSelection())+aux2;
            arg->parameters = aux;


        dm_working = true;
        //dm_get_working = true;
        pthread_create(&thread1, NULL, &srs_ui_proFrame::THREAD_DMAction, (void*)arg);
        writeInDMLog(toString(box_automatic_get_small->GetValue()));
    }
}

void srs_ui_proFrame::Onbutton_fetch_STARTClick(wxCommandEvent& event)
{
    if (choice_automatic_fetch->GetCurrentSelection() == -1 || choice_automatic_fetch_order->GetCurrentSelection() == -1)
        wxMessageBox(wxT("You must select a target name and order position value!\t"), wxT("SRS_DECISION_MAKING"), wxICON_INFORMATION);
    else
    {
        pthread_t thread1;

        dm_thread_arg *arg = new dm_thread_arg;
            arg->form = this;
            arg->action = "fetch";
            std::string aux, aux2;
            aux2 = (choice_automatic_fetch_order->GetCurrentSelection() == -1)?"":"%"+toString(choice_automatic_fetch_order->GetStringSelection());
            aux = toString(choice_automatic_fetch->GetStringSelection()) + "%" + toString(choice_automatic_fetch_search->GetStringSelection()) + aux2;
            arg->parameters = aux;

        dm_working = true;
        //dm_fetch_working = true;
        pthread_create(&thread1, NULL, &srs_ui_proFrame::THREAD_DMAction, (void*)arg);
        writeInDMLog(toString(box_automatic_fetch_small->GetValue()));
    }
}

void srs_ui_proFrame::Onbutton_deliver_STARTClick(wxCommandEvent& event)
{

    if (choice_automatic_deliver->GetCurrentSelection() == -1 || choice_automatic_deliver_deliver_position->GetCurrentSelection() == -1 || choice_automatic_deliver_search->GetCurrentSelection() == -1)
        wxMessageBox(wxT("You must select a target value!\t"), wxT("SRS_DECISION_MAKING"), wxICON_INFORMATION);
    else
    {
        pthread_t thread1;

        dm_thread_arg *arg = new dm_thread_arg;
            arg->form = this;
            arg->action = "deliver";
            std::string aux, aux2;
            aux2 = (choice_automatic_deliver_search->GetCurrentSelection() == -1)?"":"%"+toString(choice_automatic_deliver_search->GetStringSelection());
            aux = toString(choice_automatic_deliver->GetStringSelection()) + "%" + toString(choice_automatic_deliver_search->GetStringSelection())+aux2;
            arg->parameters = aux;

        dm_working = true;
        //dm_deliver_working = true;
        pthread_create(&thread1, NULL, &srs_ui_proFrame::THREAD_DMAction, (void*)arg);
        writeInDMLog(toString(box_automatic_deliver_small->GetValue()));
    }
}

void srs_ui_proFrame::Onbutton_spawn_objectsClick(wxCommandEvent& event)
{
    if (PM->WaitInteractionPrimitives() != -4)
        PM->ExecInteractionPrimitives();

    try
    {
        Ri->IP_RemoveAllObjects();

        for (unsigned int i=0; i<detected_objects.size(); i++)
            Ri->IP_AddObject(detected_objects[i].label.c_str(), detected_objects[i].pose, detected_objects[i].bounding_box_lwh);
    }
    catch(ServiceUnavailable &e) { writeInLog(e.getMessage()); }
    catch(ServiceCallFailed &e) {  writeInLog(e.getMessage()); }
    catch(std::exception &e) { writeInLog(); }
}

void srs_ui_proFrame::writeInLog(std::string text, wxColour colour)
{
    log_box->SetDefaultStyle(wxTextAttr(colour));
    log_box->AppendText(toWXString(text));
    log_box->SetDefaultStyle(wxTextAttr(BLACK));
}

void srs_ui_proFrame::writeInDMLog(std::string text, wxColour colour)
{
    box_automatic_log->SetDefaultStyle(wxTextAttr(colour));
    box_automatic_log->AppendText(toWXStringN(text));
    box_automatic_log->SetDefaultStyle(wxTextAttr(BLACK));
}

void srs_ui_proFrame::spawnobjects(wxCommandEvent& event)
{
    pthread_t thread1;
    pthread_create(&thread1, NULL, &srs_ui_proFrame::THREAD_SpawnObjects, (void*)this);
}

void srs_ui_proFrame::removeObjects(wxCommandEvent& event)
{
    try
    {
        std::vector<std::string> names = Ri->get_workspace_on_map();
        for (unsigned int i=0; i<names.size(); i++)
            Ri->IP_RemoveObject(names[i].c_str());
    }
    catch(ServiceUnavailable &e) { writeInLog(e.getMessage()); }
    catch(ServiceCallFailed &e) {  writeInLog(e.getMessage()); }
    catch(std::exception &e) { writeInLog(); }
}

void srs_ui_proFrame::removeDetectedObjects(wxCommandEvent& event)
{
    try
    {
        for (unsigned int i=0; i<detected_objects.size(); i++)
            Ri->IP_RemoveObject(detected_objects[i].label);
    }
    catch(ServiceUnavailable &e) { writeInLog(e.getMessage()); }
    catch(ServiceCallFailed &e) {  writeInLog(e.getMessage()); }
    catch(std::exception &e) { writeInLog(); }
}

void srs_ui_proFrame::spawnDetectedObjects(wxCommandEvent& event)
{
    try
    {
        Ri->IP_RemoveAllObjects();

        for (unsigned int i=0; i<detected_objects.size(); i++)
            Ri->IP_AddObject(detected_objects[i].label.c_str(), detected_objects[i].pose, detected_objects[i].bounding_box_lwh);
    }
    catch(ServiceUnavailable &e) { writeInLog(e.getMessage()); }
    catch(ServiceCallFailed &e) {  writeInLog(e.getMessage()); }
    catch(std::exception &e) { writeInLog(); }
}

void srs_ui_proFrame::Ongrid_requestsCellLeftDClick(wxGridEvent& event)
{
    int row = event.GetRow();
    std::string ros_uri = toString(grid_requests->GetCellValue(row,1));
    ROS_ERROR("Fake connection to %s", ros_uri.c_str());

    //TODO: Connect to this URI
    timer_URI.Start(1000, false);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////// THREADS ///////////////////////////////////////////////////////////////
void *srs_ui_proFrame::_THREAD_StartAssistedArm(void)
{
    try
    {
        Ri->startAssistedArm();
    }
    catch(ServiceUnavailable &e) { writeInLog(e.getMessage()); }
    catch(ServiceCallFailed &e) {  writeInLog(e.getMessage()); }
    catch(std::exception &e) { writeInLog(); }}

void *srs_ui_proFrame::_THREAD_GenerateGrasps(void)
{
    try
    {
        int object_id = Ri->getObjectId(toString(choice_selected_grasp_object->GetStringSelection())); //9; //milk
        geometry_msgs::Pose target_pose = Ri->transformPose(detected_objects[choice_selected_grasp_object->GetSelection()].pose);

        generated_grasps = Ri->getGraspsFromPosition(object_id, target_pose);

        choice_grasp_conf->SetRange(0, generated_grasps.size()-1);

        if (generated_grasps.size()>0)
        {
            choice_grasp_conf->Enable();
            button_simulateGrasp->Enable();
            button_GraspIt->Enable();
        }
        run_notification = true;
    }
    catch(ServiceUnavailable &e) { writeInLog(e.getMessage()); }
    catch(ServiceCallFailed &e) {  writeInLog(e.getMessage()); }
    catch(std::exception &e) { writeInLog(); }
}

void *srs_ui_proFrame::_THREAD_DMAction(std::string action, std::string parameters)
{
    try
    {
        int res = Ri->decision_making_actions(action, parameters);
        if (res!=-1)
        {
            if (action=="resume")
                dm_working = true;
            /*
            if (action!="pause" && action=="resume" && action=="stop")
            {
                if (action=="move")
                    dm_move_working = false;
                else if (action=="get")
                    dm_get_working = false;
                else if (action=="search")
                    dm_search_working = false;
                else if (action=="fetch")
                    dm_fetch_working = false;
                else if (action=="deliver")
                    dm_deliver_working = false;
                else
                    NULL;
            }
            */
        }
        else
        {
            writeInLog("[ERROR]: srs_decision_making fails.\n");
            //dm_move_working = dm_get_working = dm_search_working = dm_fetch_working = dm_deliver_working = false;
            dm_working = false;
        }


    }
    catch(ServiceUnavailable &e) { writeInLog(e.getMessage()); }
    catch(ServiceCallFailed &e) {  writeInLog(e.getMessage()); }
    catch(std::exception &e) { writeInLog(); }
}

void *srs_ui_proFrame::_THREAD_GraspSimulator(void)
{
    if (PM->WaitGraspSimulator() == -4)
    {
        PM->ExitGraspSimulator();
        //sleep(1);
    }

    PM->ExecGraspSimulator();
    try
    {
        int object_id = Ri->getObjectId(toString(choice_selected_grasp_object->GetStringSelection()));
        srs_msgs::FeasibleGrasp grasp_configuration = generated_grasps[choice_grasp_conf->GetValue()];
        geometry_msgs::Pose object_pose = Ri->transformPose(detected_objects[choice_selected_grasp_object->GetSelection()].pose);
        Ri->GraspSimulator(object_id, grasp_configuration, object_pose);
    }
    catch(ServiceUnavailable &e) { writeInLog(e.getMessage()); }
    catch(ServiceCallFailed &e) {  writeInLog(e.getMessage()); }
    catch(std::exception &e) { writeInLog(); }

    PM->ExitGraspSimulator();
}

void *srs_ui_proFrame::_THREAD_SpawnObjects(void)
{
    try
    {
        std::vector<std::string> names = Ri->get_workspace_on_map();
        std::vector<srs_knowledge::SRSSpatialInfo> places = Ri->get_workspace_on_map_info();

        Ri->IP_RemoveAllObjects();

        for (unsigned int i=0; i<places.size(); i++)
        {
            geometry_msgs::PoseStamped ps;
                ps.header.frame_id = "/map";
                ps.pose = places[i].pose;

            geometry_msgs::Point point;
                point.x = places[i].l;
                point.y = places[i].w;
                point.z = places[i].h;

            Ri->IP_AddObject(names[i], ps, point);
        }
    }
    catch(ServiceUnavailable &e) { writeInLog(e.getMessage()); }
    catch(ServiceCallFailed &e) {  writeInLog(e.getMessage()); }
    catch(std::exception &e) { writeInLog(); }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////// TIMER ////////////////////////////////////////////////////////////////
void srs_ui_proFrame::OnTimer1Trigger(wxTimerEvent& event)
{
    UpdateRobotStatus();
    UpdateTactilSensorSimulator();
    UpdateIMGs();

    if (dm_working)
    {
        std::string status = Ri->getDMStatusText();
        std::string current_state = Ri->getDMCurrentState() + "\n";

        if (current_state.compare(last_state)!=0)
            box_automatic_log->AppendText(toWXString(current_state));
        last_state = current_state;
/*
        if (dm_move_working)
        {
            box_automatic_move_small->SetValue(toWXString(status));
            if (current_state.compare(last_state)!=0)
            {
                box_automatic_move_big->AppendText(toWXString(current_state));
                last_state = current_state;
            }
        }
        else if (dm_search_working)
        {
            box_automatic_search_small->SetValue(toWXString(status));
            if (current_state.compare(last_state)!=0)
            {
                box_automatic_search_big->AppendText(toWXString(current_state));
                last_state = current_state;
            }
        }
        else if (dm_get_working)
        {
            box_automatic_get_small->SetValue(toWXString(status));
            if (current_state.compare(last_state)!=0)
            {
                box_automatic_get_big->AppendText(toWXString(current_state));
                last_state = current_state;
            }
        }
        else if (dm_fetch_working)
        {
            box_automatic_fetch_small->SetValue(toWXString(status));
            if (current_state.compare(last_state)!=0)
            {
                box_automatic_fetch_big->AppendText(toWXString(current_state));
                last_state = current_state;
            }
        }
        else// if (dm_deliver_working)
        {
            box_automatic_deliver_small->SetValue(toWXString(status));
            if (current_state.compare(last_state)!=0)
            {
                box_automatic_deliver_big->AppendText(toWXString(current_state));
                last_state = current_state;
            }
        }
*/
    }

    if (run_notification)
    {
        wxMessageBox(wxT("Has finished!\t"), wxT("SRS_UI_PRO: Grasp generation."), wxICON_INFORMATION);
        run_notification = false;
    }

}

void srs_ui_proFrame::Ontimer_RequestsEventTrigger1(wxTimerEvent& event)
{
    try
    {
        std::vector<srs_ui_pro::RequestEventMSG> events = Ri->getRequestEvents();
        int current_num_events = events.size();

        if (current_num_events > num_events)
        {
            int new_events = current_num_events - num_events;
            //grid_request_events->DeleteRows(0, num_events, true);
            grid_requests->InsertRows(num_events, new_events, true);

            for (int i=num_events; i<current_num_events; i++)
            {
                grid_requests->SetCellValue(i,0, toWXString(events[i].id));
                grid_requests->SetCellValue(i,1, toWXString(events[i].uri));
                grid_requests->SetCellValue(i,2, toWXString(events[i].problem));
            }
            num_events = current_num_events;
            grid_requests->AutoSizeColumns(true);
        }
    }
    catch(ServiceUnavailable &e) { writeInLog(e.getMessage()); }
    catch(ServiceCallFailed &e) {  writeInLog(e.getMessage()); }
    catch(std::exception &e) { writeInLog(); }
}

void srs_ui_proFrame::Ontimer_ROSTrigger(wxTimerEvent& event)
{
    if (!ros::master::check())
    {
        Timer1.Stop();
        timer_RequestsEvent.Stop();
        box_robot_URI->SetValue(wxString(_("Disconnected.")));

        log_box->SetDefaultStyle(wxTextAttr(RED));
        std::string aux;
        aux = "[ERROR] Disconnected from " + ros::master::getURI() + "\n";
        writeInLog(aux);

        timer_URI.Start(1000, false);
        timer_ROS.Stop();
        timer_choice.Stop();
        panel_actions_main->Disable();
        panel_options_main->Disable();
        panel_ontray_main->Disable();

        menu_rviz_run->Enable(false);
        menu_dashboard_run->Enable(false);
    }
}

void srs_ui_proFrame::Ontimer_choiceTrigger(wxTimerEvent& event)
{
    InitPredefinedPoses();
}

void srs_ui_proFrame::Ontimer_URITrigger(wxTimerEvent& event)
{
    if (ros::master::check())
    {
        log_box->SetDefaultStyle(wxTextAttr(BLUE));
        std::string aux;
        aux = "[INFO] Connected to " + ros::master::getURI() + "\n";
        writeInLog(aux, BLUE);

        Ri = new RosInterface();
        InitPredefinedPoses();
        LoadDBObjects();

        box_robot_URI->SetValue(toWXString(ros::master::getURI()));
        timer_URI.Stop();
        timer_ROS.Start(500, false);
        Timer1.Start(1000, false);
        panel_actions_main->Enable();
        panel_options_main->Enable();
        panel_ontray_main->Enable();

        menu_rviz_run->Enable(true);
        menu_dashboard_run->Enable(true);
    }
}

void srs_ui_proFrame::Onskype_timerTrigger1(wxTimerEvent& event)
{
    if (SF->connected == true)
    {
        try
        {
            SF->showContactList(notebook_skype_contacts_contactList);
        }
        catch(SkypeException &e)
        {
            SF->connected = false;
            writeInLog(e.getMessage());
            writeInLog("[SKYPE ERROR] Try to reinitialize skype.\n");
            timer_skype_contacts.Stop();
            option_skype_start->Enable(false);
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////// SKYPE ////////////////////////////////////////////////////////////////
void srs_ui_proFrame::InitSkypeNotebooks()
{
    notebook_skype_contacts_contactList->InsertColumn(0, wxT("Skype ID"),wxLIST_FORMAT_LEFT, 77);
    notebook_skype_contacts_contactList->InsertColumn(1, wxT("Status"),wxLIST_FORMAT_LEFT, 77);
    notebook_skype_contacts_contactList->InsertColumn(2, wxT("User Name"),wxLIST_FORMAT_LEFT, 154);
    notebook_skype_incoming_calls_incomingList->InsertColumn(0, wxT("Skype ID"),wxLIST_FORMAT_LEFT, 77);
    notebook_skype_incoming_calls_incomingList->InsertColumn(1, wxT("Status"),wxLIST_FORMAT_LEFT, 82);
    notebook_skype_incoming_calls_incomingList->InsertColumn(2, wxT("Date"),wxLIST_FORMAT_LEFT, 160);
}

void srs_ui_proFrame::InitSkype()
{
    if (PM->WaitSkypeRuntime() == -4)
        PM->KillSkypeRuntime();

    printf("----------------------------------------------------------------------------\n");
    fflush(stdout);

    try
    {
        std::string runtime_path = ros::package::getPath("srs_ui_pro") + "/skype_utils/skype-runtime";
        if (PM->ExecSkypeRuntime(runtime_path) == 0)
        {
            //PM->ExecSkypeRuntimeVideo();
            SF->initialize();
            SF->setEventOutput(notebook_skype_incoming_calls_incomingList);
            SF->setChatOutput(log_box);
            writeInLog("[INFO] You can now initialize Skype.\n", BLUE);
            option_skype_start->Enable();
        }
        else
            writeInLog("[SKYPE ERROR]: skype_runtime does't exist.\n");
    }
    catch(SkypeException &e) { writeInLog(e.getMessage()); }
    printf("----------------------------------------------------------------------------\n");
    fflush(stdout);
}

void srs_ui_proFrame::OnMenuSkypeStart(wxCommandEvent& event)
{
    try
    {
        int res = SF->connect(notebook_skype_contacts_contactList);
        if (res == 1) writeInLog("[SKYPE]: Connected!\n", BLUE);
        else writeInLog("[SKYPE ERROR]: Can't connect.\n");
        timer_skype_contacts.Start(5000, false);
    }
    catch(SkypeException &e){ writeInLog(e.getMessage()); }
}

void srs_ui_proFrame::showSkypeWindow()
{
    long index = -1;
    long aux = 0;
    for (;;)
    {
        index = notebook_skype_contacts_contactList->GetNextItem(index, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);

        if ( index == -1 )
            break;

        aux = index;
    }

    wxListItem li;
    li.SetId(aux);
    notebook_skype_contacts_contactList->GetItem(li);

    std::string userName = toString(li.GetText());

    SkypeWindow *Frame = new SkypeWindow(0, SF, userName, log_box);
    Frame->Show(TRUE);
}

void srs_ui_proFrame::showSkypeWindow2()
{
    long index = -1;
    long aux = 0;
    for (;;)
    {
        index = notebook_skype_contacts_contactList->GetNextItem(index, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);

        if ( index == -1 )
            break;

        aux = index;
    }

    wxListItem li;
    li.SetId(aux);
    notebook_skype_contacts_contactList->GetItem(li);

    std::string userName = toString(li.GetText());

    SkypeWindow2 *Frame = new SkypeWindow2(0, SF, userName);
    Frame->Show(TRUE);
}

void srs_ui_proFrame::showContextualMenu(wxListEvent& event)
{
    long ID_CM1 = wxNewId();
    long ID_CM2 = wxNewId();

    wxMenu menu(0);
    menu.Append(ID_CM1, wxString(_("User info")));
    Connect(ID_CM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::showSkypeWindow2);
    menu.Append(ID_CM2, wxString(_("Open conversation")));
    Connect(ID_CM2,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&srs_ui_proFrame::showSkypeWindow);

    wxPoint cursor_pos;
    cursor_pos = wxGetMousePosition();
    int mx = cursor_pos.x - this->GetScreenPosition().x;
    int my = cursor_pos.y - 75; //TOTALMENTE EMPÍRICO

    PopupMenu(&menu, mx, my);
}

void srs_ui_proFrame::acceptCall(wxListEvent& event)
{
    long index = -1;
    long aux = 0;
    for (;;)
    {
        index = notebook_skype_incoming_calls_incomingList->GetNextItem(index, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);

        if ( index == -1 )
            break;

        aux = index;
    }

    wxListItem li;
    li.SetId(aux);
    notebook_skype_incoming_calls_incomingList->GetItem(li);
    std::string userName = toString(li.GetText());

    try
    {
        SF->acceptCall(userName);
    }
    catch(SkypeException &e){ writeInLog(e.getMessage()); }

    SkypeWindow *Frame = new SkypeWindow(0, SF, userName, log_box);
    Frame->Show(TRUE);

}

void srs_ui_proFrame::ReinitializeSkype(wxCommandEvent& event)
{
    InitSkype();
    option_skype_start->Enable();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void srs_ui_proFrame::Onchoice_automatic_moveSelect(wxCommandEvent& event)
{
    std::string status = "move";
    std::string current_selection = toString(choice_automatic_move->GetStringSelection());
    status += " " + current_selection;

    box_automatic_move_small->Clear();
    box_automatic_move_small->SetValue(toWXString(status));
}

void srs_ui_proFrame::Onchoice_automatic_getSelect(wxCommandEvent& event)
{
    std::string status = "get";
    std::string current_selection = toString(choice_automatic_get->GetStringSelection());
    std::string current_selection2 = toString(choice_automatic_get_search->GetStringSelection());

    status += " " + current_selection + " "+ current_selection2;

    box_automatic_get_small->Clear();
    box_automatic_get_small->SetValue(toWXString(status));
}

void srs_ui_proFrame::Onchoice_automatic_searchSelect(wxCommandEvent& event)
{
    std::string status = "search";
    std::string current_selection = toString(choice_automatic_search->GetStringSelection());
    std::string current_selection2 = toString(choice_automatic_search_search->GetStringSelection());

    status += " " + current_selection + " "+ current_selection2;

    box_automatic_search_small->Clear();
    box_automatic_search_small->SetValue(toWXString(status));
}

void srs_ui_proFrame::Onchoice_automatic_fetchSelect(wxCommandEvent& event)
{
    std::string status = "fetch";
    std::string current_selection = toString(choice_automatic_fetch->GetStringSelection());
    std::string current_selection2 = toString(choice_automatic_fetch_order->GetStringSelection());
    std::string current_selection3 = toString(choice_automatic_fetch_search->GetStringSelection());

    status += " " + current_selection + " " + current_selection2 + " " + current_selection3;

    box_automatic_fetch_small->Clear();
    box_automatic_fetch_small->SetValue(toWXString(status));
}

void srs_ui_proFrame::Onchoice_automatic_deliverSelect(wxCommandEvent& event)
{
    std::string status = "deliver";
    std::string current_selection = toString(choice_automatic_deliver->GetStringSelection());
    std::string current_selection2 = toString(choice_automatic_deliver_deliver_position->GetStringSelection());
    std::string current_selection3 = toString(choice_automatic_deliver_search->GetStringSelection());

    status += " " + current_selection + " " + current_selection2 + " " + current_selection3;

    box_automatic_deliver_small->Clear();
    box_automatic_deliver_small->SetValue(toWXString(status));
}

void srs_ui_proFrame::Onimg_update_ontrayClick(wxCommandEvent& event)
{
    try
    {
        scrollablewindow_ontray->Scroll(0,0);
        std::vector<std::string> oot = Ri->get_objects_on_tray();

        std::string aux = "(" + toString(oot.size()) + ")";
        label_ontray->SetLabel(toWXString(aux));

        for (unsigned int i=0; i<img_objects_on_tray.size(); i++)
            delete img_objects_on_tray[i];
        img_objects_on_tray.resize(0);

        int x=8, y=0;
        for (unsigned int i=0; i<oot.size(); i++)
        {
            if (i>0 && i%4==0)
            {
                x=8; y+=56;
            }

            wxImage objectIMG = Ri->getObjectIMG(oot[i]);
            objectIMG.Rescale(54, 54);
            wxBitmapButton *img = new wxBitmapButton(scrollablewindow_ontray, wxNewId(), wxBitmap(objectIMG), wxPoint(x,y), wxSize(54,54), wxBU_AUTODRAW, wxDefaultValidator, toWXString(oot[i]));
            img_objects_on_tray.push_back(img);
            x+=72;
        }
        scrollablewindow_ontray->SetScrollbars(0, 5, 0, (y+56+8)/5);
    }
    catch(ServiceUnavailable &e) {writeInLog(e.getMessage()); }
    catch(ServiceCallFailed &e) {writeInLog(e.getMessage()); }
    catch(std::exception &e)  {writeInLog();}
}

void srs_ui_proFrame::Onimg_update_rosinfoClick(wxCommandEvent& event)
{
    ros::V_string nodes;
    ros::master::getNodes(nodes);
    box_ROS_nodes->Clear();
    for (unsigned int i=0; i<nodes.size(); i++)
        box_ROS_nodes->AppendText(toWXStringN(nodes[i]));

    ros::master::V_TopicInfo topics;
    ros::master::getTopics(topics);
    box_ROS_topics->Clear();
    for (unsigned int i=0; i<topics.size(); i++)
        box_ROS_topics->AppendText(toWXStringN(topics[i].name));

    wxArrayString output;
    wxExecute (toWXString("rosservice list"), output);
     box_ROS_services->Clear();
    for (unsigned int i=0; i<output.GetCount(); i++)
        box_ROS_services->AppendText(toWXStringN(toString(output[i])));

    wxArrayString output2;
    wxExecute (toWXString("rosparam list"), output2);
    box_ROS_params->Clear();
    for (unsigned int i=0; i<output2.GetCount(); i++)
        box_ROS_params->AppendText(toWXStringN(toString(output2[i])));
}
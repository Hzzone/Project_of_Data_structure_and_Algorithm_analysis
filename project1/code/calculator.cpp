<<<<<<< HEAD
// calculator.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "calculator.h"
#include "calculatorDlg.h"
#include "SkinMagicLib.h"
#pragma comment(lib, "SkinMagic.lib")
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCalculatorApp

BEGIN_MESSAGE_MAP(CCalculatorApp, CWinApp)
	//{{AFX_MSG_MAP(CCalculatorApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCalculatorApp construction

CCalculatorApp::CCalculatorApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CCalculatorApp object

CCalculatorApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CCalculatorApp initialization

BOOL CCalculatorApp::InitInstance()
{
	VERIFY(1 == InitSkinMagicLib(AfxGetInstanceHandle(), NULL, NULL, NULL));
	VERIFY( 1 == LoadSkinFile("corona.smf"));
	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif


	CCalculatorDlg dlg;
	m_pMainWnd = &dlg;

	//VERIFY( 1 == SetWindowSkin( m_pMainWnd->m_hWnd , "MainFrame" ));
	//VERIFY( 1 == SetDialogSkin( "Dialog" ));
	int nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
=======
// calculator.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "calculator.h"
#include "calculatorDlg.h"
#include "SkinMagicLib.h"
#pragma comment(lib, "SkinMagic.lib")
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCalculatorApp

BEGIN_MESSAGE_MAP(CCalculatorApp, CWinApp)
	//{{AFX_MSG_MAP(CCalculatorApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCalculatorApp construction

CCalculatorApp::CCalculatorApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CCalculatorApp object

CCalculatorApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CCalculatorApp initialization

BOOL CCalculatorApp::InitInstance()
{
	VERIFY(1 == InitSkinMagicLib(AfxGetInstanceHandle(), NULL, NULL, NULL));
	VERIFY( 1 == LoadSkinFile("corona.smf"));
	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif


	CCalculatorDlg dlg;
	m_pMainWnd = &dlg;

	//VERIFY( 1 == SetWindowSkin( m_pMainWnd->m_hWnd , "MainFrame" ));
	//VERIFY( 1 == SetDialogSkin( "Dialog" ));
	int nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
>>>>>>> c8e53e6cebb25bd81c804c3626305eefe06d7f69

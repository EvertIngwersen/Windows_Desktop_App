// HelloWindowsDekstopApp 
// compile with: /D_UNICOD /DUNICODE /DWIN32 /D_WINDOWS /c

#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <tchar.h>

// Global Variables 

// The  main function class name.
static TCHAR szWindowsClass[] = _T("DesktopApp");

// The string that appears in the App title bar.

static TCHAR szTitle[] = _T("Windows Desktop App Example");

// Stored instance handle for use in Win32 API calls
HINSTANCE hInst:

// Forward declerations of functions included in this module
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine,
	_In_ int nCmdShow
)



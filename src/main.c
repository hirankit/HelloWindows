 #include <windows.h>

int WINAPI WinMain (HINSTANCE hInstance,
                    HINSTANCE hPrevInstance,
                    PSTR szCmdLine,
                    int iCmdShow)
 {
     MessageBox(NULL,
                TEXT("Hello, Windows 10+"),
                TEXT("HelloMsg"),
                MB_OKCANCEL | MB_DEFBUTTON1 | MB_ICONINFORMATION
    );
     return 0;
 }
#include<unistd.h>
#include<winsock2.h>
#include<windows.h>
#include<winrar.h>
#include<wininet.h>
#include<string.h>
#include<sys/types.h>

using namespace std;

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrev,LPSTR lpCndLine, int nCndShow){
        HWND stealth;
        AllocConsole();
        stealth =FindWindowA("ConsoleWindowClass",NULL);

        ShowWindow(stealth, 0);

}

int main (){

}

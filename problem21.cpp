#include <iostream>
#ifdef _WIN32
#include <windows.h> 
#else
#include <unistd.h>  
#endif
using namespace std;

int main() {
    int seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    while (seconds > 0) {
        cout << seconds << " second" << (seconds > 1 ? "s" : "") << " remaining" << endl;
        #ifdef _WIN32
        Sleep(1000); 
        #else
        sleep(1);   
        #endif
        seconds--;}

    cout << "Stopped" << endl;
    return 0;}
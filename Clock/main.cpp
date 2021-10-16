#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    int hour,minute,second,a,err;
    err = a = 0;
    while (err==0)
    {
        cout<<"Enter hour: "<<endl;
        cin >> hour;
        std::cout << "Enter minute: " << std::endl;
        cin>>minute;
        std::cout << "Enter seconds: " << std::endl;
        cin>> second;

        if(hour<24&&minute<60&&second<60)
            err++;
        else
        {
            system("cls");
        }
        
    }
    while (a==0)
    {
        system("cls");
        cout << hour << ":" << minute << ":" << second;
        Sleep(1000);
        second++;
        if(second>59){
            second = 0;
            minute++;
        }
        if(minute>59){
            minute = 0;
            hour++;
        }
        if(hour>24){
            hour = 0;
        }
    }
    
    return 0;
}
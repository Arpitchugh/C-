#include <bits/stdc++.h>

using namespace std;

int main(){
    char inp;
    string name, gtkey;
    int age;

    cout << "\t\t\t Welcome To ChatBox \t\t\t" << endl;
    cout << "to Continue the program type 'y' or to End type any other key." << endl;
    cout << "-->  ";
    cin >> inp;
    
    // to Run
    if(inp=='y'||inp == 'Y'){
        cout << "Welcome";
    }
    //Exit code
    else{
        cout << "Thanks for visiting.";
    }
    
    if (gtkey != "hi")
    {
        cout << "\t Hello User's (input the secret code)\n";
        cin >> gtkey;
        cout << "What is your name: ";
        cin >> name;
        cout << "\n what is your age: " << endl;
        cin >> age;
    }
    
    
    system("cls");//Clear terminal output.
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main(){
    //deeclare variable
    string myName, description;
    //prompt user for full names
    cout<<"Please enter your full name";
    getline(cin,myName);
    cin>>myName;
    //Prompt user for their description
     getline(cin, description);
     cout<<"Please describe yourself";
    cin>>description;
    cout<<"Your name is "<<myName<<endl;
    cout<<"You said the following about yourself"<<description<<endl;
    return 0;
}
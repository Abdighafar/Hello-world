#include <iostream>
using namespace std;

int main(){
    int age;
    cout <<"Enter age of child:";
    cin >> age;
    if (age>=4){
        cout <<"Admit to school";
    }
    else {
        cout << "Declined, minimum age not reached.";
    }
    //Using ternary operator
    cout <<"Using ternary operator" << endl ;
    string message = (age >= 4)? "Admit to school.":"Declined not admitted";
    cout << message << endl;
    return 0 ;
    
}
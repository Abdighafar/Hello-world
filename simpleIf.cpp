#include <iostream>
using namespace std;
int main (){
    int age;
    cout << "please enter the age:";
    cin >> age;// Prompt user for age

    if (age>= 4){
        cout << "Admit to school";

    }
    else{
        cout <<"Cannot be admitted to school";
    }
    return 0;
}
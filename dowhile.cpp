#include <iostream>
using namespace std;

int main(){
    string food; 
    char resp;

    do{
        cout << "please enter a food you like";
        cin >> food;
        cout << "do younwish to continue (Y/N)";
        cin >>resp;
    }while (resp!='N');
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    string food;
    char resp;
        cout << "Please enter the food you like" << endl;
        cin>>food;
        cout << "Do you wish to continue Y/N?" << endl;
        cin>>resp;
        while (resp!='N'){
        cout << "Please enter the food you like" << endl;
        cin>>food;
        cout << "Do you wish to continue Y/N?" << endl;
        cin>>resp;
        }
        return 0;
}
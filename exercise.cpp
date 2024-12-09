#include<iostream>
#include<string>
using namespace std;
int main(){
    //deeclare variable
    string firstName, lastName, fullName, favoriteMeal, favouriteMovie;
    //prompt user for First Name
    cout<<"Please enter your first name";
    getline(cin,firstName);
    cin>>firstName;
    //Prompt user for their Last Name
     getline(cin, lastName);
     cout<<"Please enter your last name";
    cin>>lastName;
     //Prompt user for  their full Name
     getline(cin, fullName);
     cout<<"Please enter your full name";
    cin>>fullName;

     //Prompt user for favourite meal
     getline(cin, favoriteMeal);
     cout<<"Please enter your favourite meal";
    cin>>favoriteMeal;
    
     //Prompt user for favourite movie
     getline(cin, favouriteMovie);
     cout<<"Please enter your favourite movie";
    cin>>favoriteMeal;
    

    cout<<"My first name is "<<firstName <<endl;
    cout<<"My Last name is "<<lastName <<endl;
    cout<<"My full name is "<<fullName <<endl;
    cout<<"My favourite meal is "<<favoriteMeal <<endl;
    cout<<"My favourite movie is "<<favouriteMovie <<endl;
    return 0;
}
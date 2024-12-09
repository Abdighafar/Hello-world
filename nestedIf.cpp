#include <iostream>
#include <string> 

using namespace std;
int main(){
    //Declare neccessary variables
    string childName, interest;
    int age;

    //Prompt iser for child name
    cout << "please enter the child's full name";
    getline (cin,childName);
    cout <<"please enter the child's age:"
    cin>>age << endl;

    if (age >=4 && age <= 10){
        cout <<"please enter the child's interest:";
        cin >> interest ;

        if (interest == "soccer" )  //First nested IF
        {
            cout << childName << "has been admitted and assigned to the art and play group" << endl;

        }
        else
        {
            cout << "has been admitted and assigned to other groups " << endl;
        }
        else
        {
            cout <<"Admission unsuccesful for" << childName << "due to invalid age." << endl;

        }
        return 0;


        }
      
    }

}
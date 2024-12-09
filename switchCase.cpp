#include <iostream>
using namespace std;
int main(){
    int opt;
    cout<<"Hi. This is your BBIT Sem 1 Timetable (May-Aug 2024)";
    cout<<"\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday"<< endl;
    cout<<"Please select day of choice (e.g. 1, 2, 3,etc...)"<<endl;
    cin>>opt;

    switch (opt){
    case 1:
            cout<<"Monday Classes\n...................."<<endl;
            cout<<"\t1. BBIT 1106: Math for Biz"<<endl;
            cout<<"\t2. BBIT 1102: Intro to Programming"<<endl;
            break; 
    case 2:
    cout<<"Tuesday Classes\n..................."<<endl;
    cout<<"\t2. BBIT 1102: Intro to Programming"<<endl;
    cout<<"\t1.BBIT 1104: Ethics"<<endl;
            break;
    case 3:
    cout<<"Wednesday Classes\n..................."<<endl;
    cout<<"\t2. BBIT 1106: Maths for Business"<<endl;
    cout<<"\t1.BBIT 1103: Theology"<<endl;
            break;
    case 4:
    cout<<"Thursday Classes\n..................."<<endl;
    cout<<"\t2. BBIT 1106: Accounting"<<endl;
    cout<<"\t1.BBIT 1103: Fundamentals of IT"<<endl;
            break; 
    case 5:
    cout<<"Friday Classes\n..................."<<endl;
    cout<<"\t1. BBIT 1106: Maths for Business"<<endl;

            break;
        default:
        cout<<"Invalid Input";
    }
    return 0;}
#include<iostream>
using namespace std;
int main (){
    //Declare the values
    int value1, value2;
    bool boolVar1=true, boolVar2=false; //Initialize and declare two boolian variables
    cout<<"Enter value 1 :" <<endl;
    cin>>value1;
    cout<<"Enter Value 2 :"<<endl ;
    cin>>value2;
     //ARITHMETIC OPERATORS
    //Addition Arthmetic
     cout<<"Sum of "<<value1<<"+"<<value2<<"is =" <<value1+value2<<endl;
    //subtraction Arthmetic
     cout<<"the difference of "<<value1<<"-"<<value2<<"is =" <<value1-value2<<endl;
    //modulus Arthmetic
     cout<<"the modulus of "<<value1<<"%"<<value2<<"is =" <<value1%value2<<endl;
    //multiplication Arithmetic
     cout<<"the multiplication of "<<value1<<"*"<<value2<<"is =" <<value1*value2<<endl;
    //Division Arthmetic
     cout<<"the division of "<<value1<<"/"<<value2<<"is=" <<value1/value2<<endl;
     //The increment operator as a prefix
     cout<<"the increment of Value 1 by 1 is" <<++value1<<endl;
     //The increment operator "++" as a postfix
     cout<<"the increment of Value 1 by 1 is" <<value1++<<endl;
     //The decrement operator as a prefix
     cout<<"the decrement of Value 2 by 1 is" <<--value2<<endl;
     //The decrement operator "--"as a postfix
     cout<<"the decrement of Value by 1 is" <<value2--<<endl;
    // Increament and assign operator e.g increase value 1 by 3
     value1+=3; //this is same as value1=value1+3
      cout<<"The increment of value 1+=3 is "<<value1<<endl;

    //COMPARISON OPERATORS
    //Greater than operator
    cout<<value1<<"greater than"<<value2<<"="<<(bool) (value1>value2)<<endl;
    //Less thatn operator
    cout<<value1<<"less than"<<value2<<"="<<(bool) (value1<value2)<<endl;
    //equal to operator '==' is a comparison operator 
    cout<<value1<<"equal to"<<value2<<"="<<(bool) (value1==value2)<<endl;
    //Not equal to operator '!='
    cout<<value1<<"Not equal to"<<value2<<"="<<(bool) (value1!=value2)<<endl;
    //*boolian operators*
    //boolian operator '&&'
    cout<< boolVar1<<"&&"<<boolVar2<<"="<<(boolVar1&&boolVar2)<<endl;
    //boolian operator '||'
    cout<< boolVar1<<"||"<<boolVar2<<"="<<(boolVar1||boolVar2)<<endl;
    //boolian operator '!'
    cout<< boolVar1<<"!"<<boolVar2<<"="<<(!boolVar1)<<endl;
    //POINTER OPERATIONS
    //Declare a pointer
    int *ptr=nullptr;
    //Assign a value to a pointer
    ptr=&value1;
    //output address of value1
    cout<< "Address of value1 ="<<&value1<<endl;
    //Deference the pointer to get the value at memory location
    cout<<"Vaue at memory location pointed by ptr"<<ptr<<endl;
     return 0;

}
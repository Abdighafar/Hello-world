#include<iostream>
#include<chrono> //call the chrono library

using namespace std; //Define the rules in standard library
using namespace chrono; //use the chrono namespace
int main()
{
    auto start=high_resolution_clock::now();
    auto end=high_resolution_clock::now();
    duration<double> duration = end-start;
    cout<<"Elapsed time:"<< duration.count()<<"seconds\n";
    return 0;

}
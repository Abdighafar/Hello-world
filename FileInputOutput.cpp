#include<iostream>//Use the inputoutput library
#include<fstream>//Libray for file Input and Output
#include<string>//For string input
using namespace std; //Is a preprocesssor directive

int main() // This is the main function
{
    /*writing to a file.output.tex file will be created in the directory of this source file*/
    ofstream outfile("output.txt");
    outfile<<"writing to a file."<<endl;
    outfile.close();
    //Reading from a file
    ifstream infile("output.txt");
    string content;
    while (std::getline(infile,content))
{
    cout<<content<<endl;

}
infile.close(); //close the file after reading
return 0;
}
#include <iostream>
using namespace std;

int main() {
    int age;
    string name;

    // Prompt user for child age
    cout << "Enter the child's age: " << endl;
    cin >> age;

    // Prompt user for child's name
    cout << "Enter the name of your child: " << endl;
    cin >> name;

    // Determine the grade or group based on age
    if (age >= 7) {
        cout << "Admit to Grade School" << endl;
    }
    else if (age >= 5 && age <= 6) {
        cout << "Admit to Kindergarten" << endl;
    }
    else if (age >= 3 && age <= 4) {
        cout << "Admit to Pre-school" << endl;
    }
    else if (age >= 1 && age <= 2) {
        cout << "Admit to Play Group" << endl;
    }
    else if (age < 1) {
        cout << "Rejected. Invalid age" << endl;
    }

    return 0;
}
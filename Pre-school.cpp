#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string childName, interest;

    cout << "Please enter your child's name: ";
    getline(cin, childName);  
    cout << "Please enter your child's age: ";
    cin >> age;

    // Check if age is valid
    string message = (age >= 4 && age <= 10) ? "Please input child's interest: " : "Age input invalid";
    cout << message << endl;

    
    if (age >= 4 && age <= 10) {
        cout << "Please enter your child's interest: ";
        cin >> interest;

        // Assign to a play group based on the interest
        if (interest == "soccer") {
            cout << childName << " has been assigned to Soccer play group." << endl;
        } else if (interest == "art") {
            cout << childName << " has been assigned to Art play group." << endl;
        } else if (interest == "music") {
            cout << childName << " has been assigned to Music play group." << endl;
        } else if (interest == "athletics") {
             cout << childName << " has been assigned to Athletics play group." << endl;
        } else if (interest == "toys") {
            cout << childName << " has been assigned to Toy play group." << endl;
        } else {
            cout << childName << " has been assigned to Other play group." << endl;
        }
    } else {
        cout << "Age input invalid. Please enter a valid age between 4 and 10." << endl;
    }

    return 0;
}


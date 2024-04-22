#include <iostream>
#include <string> // Include the string header for dynamic string allocation

using namespace std; // Use the standard namespace for convenience

int main() {
    // Step 1: Dynamically allocate an integer
    int* pInt = new int;

    // Step 2: Dynamically allocate a string
    string* pString = new string;

    // Step 3: Take user input
    cout << "Enter an integer: ";
    cin >> *pInt; // Dereference the pointer to assign a value to the allocated integer

    cout << "Enter a string: ";
    cin.ignore(); // Clear any leftover newline characters in the input buffer
    getline(cin, *pString); // Get the string from the user and assign it to the allocated string

    // Step 4: Output the values to the console
    cout << "The value of the dynamically allocated integer is: " << *pInt << endl;
    cout << "The value of the dynamically allocated string is: " << *pString << endl;

    // Clean up dynamically allocated memory
    delete pInt;   // Free the allocated integer
    delete pString; // Free the allocated string

    return 0;
}
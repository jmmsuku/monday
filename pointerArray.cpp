#include <iostream> 

using namespace std; 

int main() {
    int rows, cols;

    // Step 1: Get the dimensions of the 2D array from user input
    cout << "Enter the number of rows (maximum 3): ";
    cin >> rows;
    while (rows > 3 || rows < 1) {
        cout << "Invalid input. Please enter a value between 1 and 3 for rows: ";
        cin >> rows;
    }

    cout << "Enter the number of columns (maximum 3): ";
    cin >> cols;
    while (cols > 3 || cols < 1) {
        cout << "Invalid input. Please enter a value between 1 and 3 for columns: ";
        cin >> cols;
    }

    // Step 2: Dynamically allocate a 2-dimensional array
    double** pPointer = new double*[rows]; // Allocate memory for rows
    for (int i = 0; i < rows; ++i) {
        pPointer[i] = new double[cols]; // Allocate memory for columns in each row
    }

    // Step 3: Assign values to each element using nested loops
    cout << "Enter the values for the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin >> pPointer[i][j];
        }
    }

    // Step 4: Output the values to the console
    cout << "The values of the 2D array are:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << pPointer[i][j] << " ";
        }
        cout << endl;
    }

    // Step 5: Clean up dynamically allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] pPointer[i]; 
    }
    delete[] pPointer; // Delete  pointers

    return 0;
}

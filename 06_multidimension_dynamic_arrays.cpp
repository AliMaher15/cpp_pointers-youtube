#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "rows, cols: ";
    cin >> rows >> cols;

    // pointer to a pointer
    // points to an array of pointers
    // allocate a memory for array of pointers int*
    int** table = new int* [rows]; 

    // iterate over each row and create a col
    for(int i=0; i<rows; i++) {
        table[i] = new int [cols];
    }

    // access elements at specific position
    table[1][2] = 88; //row 1, col 2

    // de-allocating memory
    for(int i=0; i<rows; i++) {
        delete[] table[i];
    }
    delete[] table;
    table = NULL;
}
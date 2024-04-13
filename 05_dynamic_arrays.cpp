#include <iostream>
using namespace std;

int main() {
    int myArray[5]; // will get 5 continuous containers in memory
                    // accessing elements will be very fast
                    // inserting or deleting will take large time
                    // size must be known at compile time

    // What if I want the user to enter array size?
    int size;
    cout << "Enter size: "; cin >> size;
    // new: keyword to allocate memory and store address inside array
    int * dyn_array = new int [size];
    // add elements to array
    for(int i=0; i<size; i++) {
        cout << "Array["<<i<<"] ";
        cin >> dyn_array[i];
    }
    // print array
    for(int i=0; i<size; i++) {
        // 2 ways to dereference the pointer dynamic array:
        //cout << dyn_array[i] << " ";
        cout << *(dyn_array+i) << " ";
    }
    //delete: keyword to de-allocate memory
    delete[]dyn_array;
    dyn_array = NULL; // make pointer point to NULL location
}
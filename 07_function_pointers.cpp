#include <iostream>
using namespace std;

// main usage of function pointers:
/// pass a function as an argument to another function
/// to optimize the code and make it reusable

int getNumber() {
    return 5;
}

int add(int a, int b) {
    return a+b;
}

int main()
{
    cout << getNumber() << endl; // return 5
    cout << getNumber << endl;   // return address of function

    // create a function pointer
    cout << "Function Pointer:\n";
    // return_type (*ptr_name)(parameters of function)
    int(*funcPtr)() = getNumber;
    // invoke the function using the pointer
    cout << funcPtr() << endl;

    /*******************************************/
    cout << "Function Pointer with parameters:\n";
    // a function with parameters
    int(*funcPtr2)(int, int) = add;
    // invoke
    cout << add(2, 3) << endl;
    cout << funcPtr2(4, 3) << endl;
}
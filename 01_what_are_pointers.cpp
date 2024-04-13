#include <iostream>
using namespace std;

// Usages of Pointers:
    //// 1. pass values by reference to a function
    //// 2. return multiple values from a function 
    //// 3. using them with arrays
    //// 4. dynamic memory allocation
    //// 5. use a pointer of a base class to access object of derived class
    //// 6. smart pointers

int main()
{
    int n = 5;
    // variable:
    cout << "n = " << n << endl;
    // address of variable:
    cout << "&n = " <<&n << endl;

    // declare a pointer
    int* ptr = &n;
    cout << "ptr = " << ptr << endl;
    // access value stored by pointer
    cout << "*ptr = " << *ptr << endl;

    // change stored value of pointer
    *ptr = 10;
    cout << "*ptr = " << *ptr << endl;
    cout << "n = " << n << endl;

}
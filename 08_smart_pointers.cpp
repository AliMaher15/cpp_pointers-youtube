#include <iostream>
#include <memory>
using namespace std;

// smart pointer is a wrapper for a raw pointer
// they de-allocate memory automatically

// types of smart pointers:
// 1. unique
// 2. shared 
// 3. weak

class MyClass {
public: 
    MyClass() {
        cout << "Constructor invoked\n";
    }
    ~MyClass() {
        cout << "Destructor invoked\n";
    }
};

int main()
{
    // unique pointer:
    // assign a value (25) to the pointer
    unique_ptr<int> unPtr1 = make_unique<int>(25);
    // dereference the smart pointer
    //cout << unPtr1 << endl;
    cout << *unPtr1 << endl;

    // unique pointers can't share the same address
    // unique_ptr<int> unPtr2 = unPtr1 -> error

    // move ownership of the address to ptr2, previous owner becomes NULL
    unique_ptr<int> unPtr2 = move(unPtr1);
    cout << *unPtr2 << endl;

    /***********************************/
    // test that pointer memory is de-allocated
    unique_ptr<MyClass> unPtrC = make_unique<MyClass>();
}
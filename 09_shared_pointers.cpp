#include <iostream>
#include <memory>
using namespace std;

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
    shared_ptr<MyClass> shPtr1 = make_shared<MyClass>();
    // shared pointer has the count of address owners
    cout << "Shared count: " << shPtr1.use_count() << endl;
    // add another owner
    {
        shared_ptr<MyClass> shPtr2 = shPtr1;
        cout << "Shared count: " << shPtr1.use_count() << endl;
    }
    cout << "Shared count: " << shPtr1.use_count() << endl;
}
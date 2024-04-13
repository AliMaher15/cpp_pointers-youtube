#include <iostream>
#include <memory>
using namespace std;

// weak pointer won't keep the object alive if no one needs it

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
    weak_ptr<int> wePtr1;
    {
        shared_ptr<int> shPtr1 = make_shared<int>(25);
        wePtr1 = shPtr1;
    }
    // wePtr1 won't keep shPtr address, will be destroyed
}
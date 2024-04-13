#include <iostream>
using namespace std;

// a special type of pointer that can
// hold the address of any data type (float, int, char, ..)

// limitation: can't directly dereference a void pointer

void print_number(int* number_ptr) {
    cout << *number_ptr << endl;
}
void print_letter(char* char_ptr) {
    cout << *char_ptr << endl;
}

// general print function
void print(void* ptr, char type) {
    // type: i for int, f for float, ...
    switch (type)
    {
    case 'i':
        // casting ptr to int then dereference it
        cout << *((int*)ptr) << endl; 
        break;
    case 'c': 
        cout << *((char*)ptr) << endl;
        break;
    default:
        break;
    }
}

int main()
{
    int number = 5;
    print_number(&number);

    char letter = 'a';
    print_letter(&letter);

    cout << "Using void pointer:\n";
    print(&number, 'i');
    print(&letter, 'c');

}
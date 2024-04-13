#include <iostream>
using namespace std;

int main()
{
    int lucky_numbers[5] = {2, 3, 5, 7, 9};
    cout << lucky_numbers << endl; // address of first element
    cout << &lucky_numbers[0] << endl;

    // print a value
    cout << lucky_numbers[2] << endl;
    // another way by incrementing the address of 1st value
    // then dereference it
    cout << *(lucky_numbers+2) << endl;

    /*********************************************/
    // write numbers into array
    int lucky_numbers2[5];
    for(int i=0; i<=4; i++) {
        cout << "Number: ";
        cin >> lucky_numbers2[i];
    }
    // using dereference method to print
    for(int i=0; i<=4; i++) {
        cout << *(lucky_numbers+i) << " ";
    }
}
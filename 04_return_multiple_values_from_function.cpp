#include <iostream>
using namespace std;

// a function that return smallest number of array
int get_min(int numbers[], int size) {
    int min = numbers[0];
    // iterate through array
    for(int i=1; i<size; i++) {
        if(numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}
// a function that return biggest number of array
int get_max(int numbers[], int size) {
    int max = numbers[0];
    // iterate through array
    for(int i=1; i<size; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

// using one function to get both
void get_min_and_max(int numbers[], int size,
                     int* min, int* max) 
{
    for(int i=1; i<size; i++) {
        if(numbers[i] > *max)
            *max = numbers[i];
        if(numbers[i] < *min)
            *min = numbers[i];
    }
}

int main()
{
    int numbers[5] = {5, 4, -2, 29, 6};
    cout << "Min is " << get_min(numbers, 5) << endl;
    cout << "Max is " << get_max(numbers, 5) << endl;
    /**************************************************/
    int min = numbers[0]; int max = numbers[0];
    get_min_and_max(numbers, 5, &min, &max);
    cout << "Using Pointer for multiple returns:\n";
    cout << "Min is " << min << endl;
    cout << "Max is " << max << endl;
}
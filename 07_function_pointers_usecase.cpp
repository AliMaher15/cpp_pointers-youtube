#include <iostream>
#include <vector>
using namespace std;

// main usage of function pointers:
/// pass a function as an argument to another function
/// to optimize the code and make it reusable

bool ascendingCompare(int a, int b) {
    return a < b;
}

bool descendingCompare(int a, int b) {
    return a > b;
}

void sortAscending(vector<int> &numbersVector) {
    for(int startIndex = 0; startIndex < numbersVector.size(); startIndex++) 
    {
        int bestIndex = startIndex;
        
        for(int currentIndex = startIndex+1; currentIndex < numbersVector.size(); currentIndex++)
        {
            // We are doing comparison here
            if(ascendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
                bestIndex = currentIndex;
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}

bool sortDescending(vector<int> &numbersVector) {
    for(int startIndex = 0; startIndex < numbersVector.size(); startIndex++) 
    {
        int bestIndex = startIndex;
        
        for(int currentIndex = startIndex+1; currentIndex < numbersVector.size(); currentIndex++)
        {
            // We are doing comparison here
            if(descendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
                bestIndex = currentIndex;
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}

void printNumbers(vector<int> &numbersVector) {
    for (int i = 0; i < numbersVector.size(); i++)
    {
        cout << numbersVector[i] << " ";
    }
    
}

// Now, a function for both ascending or descending sorting
void customSort(vector<int> &numbersVector, bool (*compareFuncPtr)(int, int)) {
    for(int startIndex = 0; startIndex < numbersVector.size(); startIndex++) 
    {
        int bestIndex = startIndex;
        
        for(int currentIndex = startIndex+1; currentIndex < numbersVector.size(); currentIndex++)
        {
            // We are doing comparison here
            if(compareFuncPtr(numbersVector[currentIndex], numbersVector[bestIndex]))
                bestIndex = currentIndex;
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}

int main()
{
    vector<int> myNumbers = {2, 5, 1, 3, 6, 4};
    sortAscending(myNumbers);
    printNumbers(myNumbers);
    cout << endl;
    sortDescending(myNumbers);
    printNumbers(myNumbers);
    cout << endl;
    /************************************************/
    // using function pointer:
    cout << "Using Function Pointer:" << endl;
    vector<int> myNumbers2 = {2, 5, 1, 3, 6, 4};
    // create the function pointer
    bool (*ascfuncPtr)(int, int) = ascendingCompare;
    bool (*desfuncPtr)(int, int) = descendingCompare;

    customSort(myNumbers2, ascfuncPtr);
    printNumbers(myNumbers2);
    cout << endl;

    myNumbers2 = {2, 5, 1, 3, 6, 4};
    customSort(myNumbers2, desfuncPtr);
    printNumbers(myNumbers2);
    cout << endl;
}
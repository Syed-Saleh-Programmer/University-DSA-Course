// Write a program that inputs 5 integers into an array and then displays the elements in reverse order.

#include <iostream>

using namespace std;

void reverseArray(int* arr, int size) {
    int* start = arr;                // Pointer to the first element
    int* end = arr + size - 1;        // Pointer to the last element

    // Swap elements while the start pointer is before or equal to the end pointer
    while (start < end) {
        // Swap the values
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers
        start++;
        end--;
    }
}

void getUserInput(int *marks, int size){
    for(int i=0; i<size; i++){
        cout<<"\nEnter marks of Student "<<i<<": ";
        cin>>*(marks + i);
    }
}

void displayMarks(int *marks, int size){
    for(int i=0; i<size; i++){
        cout<<"Student "<<i<<": "<<*(marks + i)<<endl;
    }
    
}

int main() {
    
    int marks[5] = {20, 30, 45, 15, 28};
    int size = sizeof(marks)/sizeof(int);
    getUserInput(marks, size);
    cout<<"\n";
    reverseArray(marks, size);
    displayMarks(marks, size);
    
    

    return 0;
}
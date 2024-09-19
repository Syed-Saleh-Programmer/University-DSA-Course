// Write a program to input the marks of 5 students, then find and display the maximum and minimum marks

#include <iostream>

using namespace std;

int calculateMin(int marks[], int size){
    int min = marks[0];
    for(int i=0; i<size; i++){
        if(marks[i] < min){
            min = marks[i];
        }
    }
    
    return min;
}

int calculateMax(int marks[], int size){
    int max = marks[0];
    for(int i=0; i<size; i++){
        if(marks[i] > max){
            max = marks[i];
        }
    }
    
    return max;
}

void getUserInput(int *marks, int size){
    for(int i=0; i<size; i++){
        cout<<"\nEnter marks of Student "<<i<<": ";
        cin>>*(marks + i);
    }
}

int main() {
    
    int marks[5] = {20, 30, 45, 15, 28};
    int size = sizeof(marks)/sizeof(int);
    getUserInput(marks, size);
    cout<<"\n";
    cout<<"Max Marks: "<<calculateMax(marks, size)<<endl;
    cout<<"Min Marks: "<<calculateMin(marks, size)<<endl;
    

    return 0;
}
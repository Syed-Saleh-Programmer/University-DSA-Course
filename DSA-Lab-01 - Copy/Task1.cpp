// Store the marks of 5 students, display them, and calculate the average of the marks.

#include <iostream>

using namespace std;

void displayMarks(int *marks, int size){
    for(int i=0; i<size; i++){
        cout<<"Student "<<i<<": "<<*(marks + i)<<endl;
    }
    
}

float calculateAverage(int *arr, int size){
    int sum=0;
    float average=0;
    for(int i=0; i<size; i++){
        sum+= *(arr + i);
    }
    
    average = (float) sum/size;
    
    return average;
}

int main() {
    
    int marks[] = {20, 30, 45, 15, 28};
    int size = sizeof(marks)/sizeof(int);
    displayMarks(marks, size);
    cout<<"\n-------------------------------------"<<endl;
    cout<<"Average: "<<calculateAverage(marks, size);
    

    return 0;
}
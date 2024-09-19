// Write a program that inputs 10 integers into an array, then counts how many of them are even and how many are odd.

#include <iostream>

using namespace std;


void getUserInput(int *marks, int size){
    for(int i=0; i<size; i++){
        cout<<"\nEnter num "<<i<<": ";
        cin>>*(marks + i);
    }
}
    

int main() {
    
    int nums[10];
    int size = 10;
    getUserInput(nums, size);
    cout<<"\n";
    
    int odds = 0;
    int evens = 0;
    
    for(int i=0; i<size; i++){
        if(nums[i]%2==0) evens++;
        else odds++;
    }
    
    cout<<"Evens: "<<evens<<"\nOdds: "<<odds;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int positiveSum = 0, negativeSum = 0;

    // Input 10 integers
    cout << "Enter 10 integers: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // Calculate sum of positive and negative numbers
    for (int i = 0; i < 10; i++) {
        if (numbers[i] > 0) {
            positiveSum += numbers[i];
        } else if (numbers[i] < 0) {
            negativeSum += numbers[i];
        }
    }

    // Output the results
    cout << "Sum of positive numbers: " << positiveSum << endl;
    cout << "Sum of negative numbers: " << negativeSum << endl;

    return 0;
}
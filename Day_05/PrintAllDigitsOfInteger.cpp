#include<iostream>
using namespace std;

void printAllDigits(int n) {
    // while(n > 0) {
    while(n) { //good practise
        int onesPlaceDigit = n % 10;
        cout << "Digit: " << onesPlaceDigit << endl;
        n /= 10;
    }
}

int main() {
    int n;
    cout << "Enter number to see its digits: " ;
    cin>>n;

    printAllDigits(n);

    return 0;
}
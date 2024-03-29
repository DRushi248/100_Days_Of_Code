#include<iostream>
using namespace std;

bool searchArray(int arr[], int size, int target, int index) {
    //base case
    if(index >= size) {
        return false;
    }

    if(arr[index] == target) {
        return true;
    }

    //recursive call
    bool aageKaAns = searchArray(arr, size, target, index+1);
    return aageKaAns; 
}


int main() {
    int arr[] = {11,20,31,40,51};
    int size = 5;
    int index = 0;
    int target = 51;
    cout << endl << "Target found or not: " << searchArray(arr, size, target, index) << endl;

    return 0;
}
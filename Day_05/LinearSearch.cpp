#include<iostream>
using namespace std;

//Linear search function
//present -> true
//absent -> false
bool linearSearch(int arr[], int size, int target) {
    
    for(int i=0; i<size; i++) {
        if(arr[i] == target) {
            //found 
            return true;
        }
    }
    //not found
    return false;
}

int main() {

    int arr[5] = {2,4,6,8,10};
    int size = 5;
    //function call
    int target = 11;

    bool ans = linearSearch(arr, size, target);

    if(ans == 1) { //insted of 1 u can also write true
        cout << "Target found" << endl;
    }
    else {
        cout << "Target not found" << endl;
    }

    return 0;
}
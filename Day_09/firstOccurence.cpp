#include<iostream>
using namespace std;

int findFirstOccurence(int arr[], int n, int target) {
    int s = 0;
    int e = n-1;
    int mid = s +(e-s)/2; //no integer overflow
  
    int ans = -1;

    while(s<=e) {
        if(arr[mid] == target) {
            //ans store
            ans = mid;
            //left move
            e = mid-1;
        }
        else if(target > arr[mid]) {
            //right move
            s = mid+1;
        }
        else if (target < arr[mid]) {
            //left move
            e = mid-1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int main() {
    int arr[] = {10,20,30,30,30,30,70,80,90};
    int target = 30;
    int n = 9;

    int ansIndex = findFirstOccurence(arr, n, target);   
    
    if(ansIndex == -1) {
        cout << "Element not found " << endl;
    }
    else {
        cout << "Element found at Index: " << ansIndex << endl;
    }

    return 0;
}
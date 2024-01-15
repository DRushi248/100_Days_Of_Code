#include<iostream>
using namespace std;

int findOddOccuringElement(int arr[], int n) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s <= e) {

        //single element
        if(s == e) {
            return s;
        }

        //mid check -> even or odd
        if(mid & 1) { // mid&1 -> true -> odd number
            if(mid-1 >= 0 && arr[mid-1] == arr[mid]) {
                //right me jao
                s = mid + 1;
            }
            else {
                //left me jao
                e = mid - 1;
            }
        }
        else {
            //even
            if(mid+1 < n && arr[mid] == arr[mid+1]) {
                //right move
                s = mid + 2;
            }
            else {
                e = mid; //so that my ans will not get lost
            }
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main() {

    int arr[] =  {10,10,2,2,3,3,7,5,5,6,6,7,7};
    int n = 13;

    int ansIndex = findOddOccuringElement(arr, n);

    cout << "Final Ans is: " << arr[ansIndex] << endl;


    return 0;
}
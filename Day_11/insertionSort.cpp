#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &v) {
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}


void insertionSort(vector<int> &v) {
    int n = v.size();
    //i=0 ke liye chod dete hai
    for(int i=1; i<n; i++) {
        int key = v[i];
        int j = i-1;

        //move elements of arr[0...i-1] that are greater than key
        //key to one position ahead of their current postition
        while(j>=0 && v[j] > key) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key; //yaha kar rahe hai hum insertion
    }
}




int main() {
    vector<int> v = {5,3,0,-1,33,56,4};
    insertionSort(v);
    print(v);
    return 0;
}
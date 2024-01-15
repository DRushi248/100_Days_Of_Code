#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &v) {
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}


void selectionSort(vector<int> &v) {
    int n = v.size();
    for(int i=0; i<n-1; i++) {
        int minIndex = i; 
        for(int j=i+1; j<n; j++) {
            if(v[j] < v[minIndex]) { //increasing order 
            // if(v[j] > v[minIndex]) { //decreasing order 
                minIndex = j;
            }
        }

        //swap ith and minIndex element
        swap(v[i], v[minIndex]);
    }
}



int main() {
    vector<int> v = {5,3,0,-1,33,56,4};
    selectionSort(v);
    print(v);
    return 0;
}
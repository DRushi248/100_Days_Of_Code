#include<iostream>
using namespace std;

void reverseDiagonalSum(int arr[][4], int row, int col) {
    int sum = 0;
    int j=col-1;
    for(int i=0; i<row; i++) {
        sum += arr[i][j];
        j--;
    }
    cout << sum;
}


int main() {

    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int row = 4;
    int col = 4;

    reverseDiagonalSum(arr, row, col);
    

    return 0;
}
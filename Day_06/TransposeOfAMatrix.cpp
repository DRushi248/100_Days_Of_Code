#include<iostream>
using namespace std;

void printRow_wise(int arr[][4], int row, int col) { //at least col size is required in input parameters in 2D-Array
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


void transpose(int arr[][4], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=i; j<col; j++) { //instead of j=0 we have taken j=i please note it
            swap(arr[i][j], arr[j][i]);
        }
    }
}

    
int main() {
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,70,8},
        {9,10,11,12},
        {12,24,46,89}
    };
    int row = 4;
    int col = 4;

    cout << endl << "Printing before transpose: " << endl;
    printRow_wise(arr, row, col);

    cout << endl << "Doing transpose: " << endl;
    transpose(arr, row, col);

    cout << endl << "Printing after transpose: " << endl;
    printRow_wise(arr, row, col);


    return 0;
}

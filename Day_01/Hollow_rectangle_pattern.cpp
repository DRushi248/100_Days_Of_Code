#include<iostream>
using namespace std;

int main() {

    int R = 5; //R -> denotes no. of rows
    int C = 5; //C -> denotes no. of columns
    //outer loop
    for(int row=0; row<R; row=row+1) {
        //inner loop 
        for(int col=0; col<C; col=col+1) {
            //if zeroth or last row, then print star
            if(row==0 || row==R-1) {
                 cout << "* ";
            }
            else {
                if(col==0 || col==C-1) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }


    return 0;
}
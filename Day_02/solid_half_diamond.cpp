#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<2*n-1; i++) {
        int condition = 0;
        if(i<n) { //growing phase of diamond
            condition = i;
        }
        else { //shrinking phase of diamond
            condition = n - (i%n) - 2;
        }
        for(int j=0; j<=condition; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
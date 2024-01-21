#include<iostream>
using namespace std;

int slowExponentiation(int a, int b) {
    int ans = 1;
    for(int i=0; i<b; i++) {
        ans *= a;
    }
    return ans;
} // T.C = O(b);


int fastExponentiation(int a, int b) {
    int ans = 1;
    while(b > 0) {
        if(b & 1) {
            //odd
            ans = ans*a;
        }
        a = a*a;
        b>>=1; //Right shift b=b/2;
    }
    return ans;
}


int main() {
    cout << slowExponentiation(5, 4) << endl;
    cout << fastExponentiation(5, 4) << endl;
    return 0;
}
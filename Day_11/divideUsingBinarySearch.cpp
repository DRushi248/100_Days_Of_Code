#include<iostream>
using namespace std;

int getQuotient(int divisor, int dividend) {
    int s = 0;
    int e = dividend;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        cout << "s:" << s << ", " << "e:" << e << endl;
        if(mid * divisor == dividend) {
            return mid;
        }
        if(mid * divisor < dividend) {
            //ans store
            ans = mid;
            //right move
            s = mid+1;
        }
        else {
            //left
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {

    int divisor = 7;
    int dividend = -35;

    //Absolute function:
    int n = -5;
    cout << abs(n) << endl;

    // int ans = getQuotient(divisor, dividend);
    int ans = getQuotient(abs(divisor), abs(dividend));

    //check sign +ve or -ve

    if((divisor>0 && dividend<0) || (divisor<0 && dividend>0)) {
         ans = 0 - ans;
    }


    cout << "Final Ans is: " << ans << endl;

    return 0;
}
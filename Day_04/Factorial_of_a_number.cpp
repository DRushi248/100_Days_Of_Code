#include<iostream>
using namespace std;

long long int fact(long long int n) { //int can't store larger values therefore we us long long int
    long long int fact = 1;
    for(int i=1; i<=n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n;
    cin >> n;

    long long int ans = fact(n);
    cout << "Factorial of " << n << " is " << ans << endl;


    return 0;
}
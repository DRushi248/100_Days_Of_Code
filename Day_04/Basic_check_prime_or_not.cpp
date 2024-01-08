#include<iostream>
using namespace std;

    bool checkPrime(int n) {
        for(int i=2; i<n; i++) {
            if(n%i == 0) {
                //if remainder = 0 -> perfectly divisible
                //not a prime number
                return false;
            }
        }
        return true;
    }


int main() {

    bool prime = checkPrime(11);
    if(prime) {
        cout << "its a prime number" << endl;
    }
    else {
        cout << "its not a prime number" << endl;
    }

    return 0;
}
    
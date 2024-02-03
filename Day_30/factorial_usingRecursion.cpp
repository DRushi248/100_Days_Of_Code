#include<iostream>
using namespace std;

int factorail(int n) {
    //base case
    if(n == 1) 
        return 1;
    if(n == 0)
        return 1;

    //processing


    //recursive realtion
    int recursionKaAns = factorail(n-1);

    //processing
    int finalAns = n * recursionKaAns;
    return finalAns;
}

int main() {

    cout << factorail(5) << endl;

    return 0;
}
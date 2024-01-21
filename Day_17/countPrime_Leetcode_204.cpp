class Solution {
public:

    /* 1) Naive Approach:
    bool isPrime(int n) {
        if(n <= 1)
        return false;

        for(int i=2; i<n; i++) {
            if(n%i == 0) {
                return false;
            }
        }
        return true;
    }
    */

    /* 2) Sqrt Approach:
    bool isPrime(int n) {
        if(n <= 1)
        return false;
        int sqrtN = sqrt(n);
        for(int i=2; i<=sqrtN; i++) {
            if(n%i == 0) {
                return false;
            }
        }
        return true;
    }
    */

    /* 1 and 2 :
    int countPrimes(int n) {
        int c = 0;

        for(int i=0; i<n; i++) {
            if(isPrime(i)) {
                c++;
            }
        }
        return c;
    }
    */

    // 3) Sieve of Eratosthenes:
    int countPrimes(int n) {
        if(n == 0) 
        return 0;

        vector<bool> prime(n, true);// all are prime marked already
        prime[0] = prime[1] = false;

        int ans = 0;

        for(int i=2; i<n; i++) {
            if(prime[i]) {
                ans++;

                int j=2*i;
                while(j<n) {
                    prime[j] = false;
                    j += i;
                }
            }
        }
        return ans;
    }
};
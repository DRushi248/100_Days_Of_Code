//Set the Kth Bit (gfg question)

class Solution
{
public:
    int setKthBit(int N, int K)
    {
        // Write Your Code here
        // int mask = 1 << K;
        // int ans = N | mask;
        // return ans;
        return N | (1<<K);
    }
    
};

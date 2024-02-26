class Solution {
public:
    unordered_map<int, vector<int>> primeToIndex;
    unordered_map<int, vector<int>> indexToPrime;

    void dfs(int index, vector<bool>& visitedIndex, unordered_map<int,bool>& visitedPrime) {
        if (visitedIndex[index]) return;
        visitedIndex[index] = true;

        for (int prime : indexToPrime[index]) {
            if (visitedPrime[prime]) continue;
            visitedPrime[prime] = true;
            for (int nextIndex : primeToIndex[prime]) {
                if (!visitedIndex[nextIndex]) {
                    dfs(nextIndex, visitedIndex, visitedPrime);
                }
            }
        }
    }

    bool canTraverseAllPairs(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            for (int j = 2; j * j <= temp; j++) {
                if (temp % j == 0) {
                    primeToIndex[j].push_back(i);
                    indexToPrime[i].push_back(j);
                    while (temp % j == 0) temp /= j;
                }
            }
            if (temp > 1) {
                primeToIndex[temp].push_back(i);
                indexToPrime[i].push_back(temp);
            }
        }

        vector<bool> visitedIndex(nums.size(), false);
        unordered_map<int, bool> visitedPrime;
        dfs(0, visitedIndex, visitedPrime);

        for (bool visit : visitedIndex) {
            if (!visit) return false;
        }
        return true;
    }
};
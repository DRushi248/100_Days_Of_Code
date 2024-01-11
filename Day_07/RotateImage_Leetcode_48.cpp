class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        //transpose
        for(int i=0; i<n; i++) {
            for(int j=i; j<matrix[i].size(); j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        //reverse -> 2D Matrix ki saari rows ko
        //kitni rows hai -> 0>n-1
        for(int i=0; i<n; i++) {
            //har row ko reverse karna hai
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
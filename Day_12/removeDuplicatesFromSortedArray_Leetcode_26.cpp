class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1, j=0;
        //two pointers
        while(i < nums.size()) {
            if(nums[i] == nums[j]) i++;
            // else {
            //     j++;
            //     nums[j] = nums[i];
            //     i++;
            // }
            else nums[++j] = nums[i++];
        }
        return j+1;
    }
};
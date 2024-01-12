//leetcode problem no. 287 

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        //Positioning method 
        while(nums[0] != nums[nums[0]]) {
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
};
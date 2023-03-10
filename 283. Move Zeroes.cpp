class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans;
        for (int i=0; i<size; i++) {
            if (nums[i]!=0) ans.push_back(nums[i]);
        }
        int zeros = size - ans.size();
        for (int i=0; i<zeros; i++) {
            ans.push_back(0);
        }
        for (int i=0; i<size; i++) {
            nums[i]=ans[i];
        }
    }
};
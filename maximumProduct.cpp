class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int a = nums[len-1] * nums[len-2] *nums[len-3];
        int b = nums[len-1] * nums[1] * nums[0];
        return a > b ? a : b;
    }
};

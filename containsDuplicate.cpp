class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> res;
        for(int i =0 ; i <nums.size(); i++) {
            if(res.count(nums[i])){
                return true;
            }
            res.insert(pair<int, int>(nums[i], i));
        }
        return false;
    }
};

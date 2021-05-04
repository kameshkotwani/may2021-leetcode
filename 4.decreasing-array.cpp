class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0; i + 1 < n; ++i){
            if(nums[i] > nums[i + 1]){
                ++count;
                if(count > 1 || i > 0 && i + 2 < n && nums[i - 1] > nums[i + 1] && nums[i] > nums[i + 2])
                    return false;
            }
        }
        return true;
    }
};

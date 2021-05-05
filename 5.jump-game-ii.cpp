class Solution {
public:
    int jump(vector<int>& nums) {
   
       int curStep = 0, i = 0, n = nums.size(), level = 0;
            
        while(curStep < n-1) {
            level++; 
            int preStep = curStep; 
            for(;i <= preStep;++i) { 
                curStep = max(curStep, i+nums[i]);
            }
        }
        
        return level;
    }
};

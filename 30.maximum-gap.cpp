class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2)return 0;
        sort(nums.begin(),nums.end());
        int len_num = nums.size();
         int max_sum=0;
            for(int i=0,j=i+1;i<len_num-1,j<len_num;i++,j++){
                max_sum = max(max_sum,abs(nums[i]-nums[j]));
        }
        return max_sum;
    }
};

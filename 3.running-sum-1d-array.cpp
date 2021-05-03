class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      vector<int> output={0};
      int sum=0;
      output[0]=nums[0];
      int s=nums.size();
      for(int i=1;i<s;i++){
        sum=nums[i]+output[i-1];
        output.emplace_back(sum);
      }
      return output;
    }
};

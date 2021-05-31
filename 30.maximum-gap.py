class Solution:
    def maximumGap(self, nums: List[int]) -> int:
        
        len_nums=len(nums)
        if len_nums<2: 
            return 0
        nums.sort()
        max_=0
        i=0
        j=i+1
        while i<len_nums-1:
            max_ = max(max_,abs(nums[i]-nums[j]))
            i+=1
            j+=1
        return max_
    

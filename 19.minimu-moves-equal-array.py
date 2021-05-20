class Solution:
    def minMoves2(self, nums: List[int]) -> int:
        nums.sort()
        counter=0
        for n in nums:
            counter+=abs(n-nums[len(nums)//2])
        return counter

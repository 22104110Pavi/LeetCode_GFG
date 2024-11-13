class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        minnum=min(nums)
        maxnum=max(nums)
        l=[i for i in range(0,len(nums))]
        nums.sort()
        f=-1
        for i in range(len(nums)):
            if (nums[i]!=l[i]):
                f=l[i]
                break
        if f==-1:
            f=maxnum+1
        return f
        

class Solution(object):
    def maxAbsoluteSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        sum,max_sum,min_sum = 0,0,0 
        for i in nums:
            sum += i
            max_sum = max(max_sum,sum) 
            min_sum = min(min_sum,sum)
        return max_sum - min_sum
        

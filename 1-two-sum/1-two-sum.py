class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = dict()
        
        for i in range(len(nums)):
            temp = target - nums[i]
            if temp in hashmap:
                return [hashmap[temp], i]
            else:
                hashmap[nums[i]] = i
        
        return [0, 0]
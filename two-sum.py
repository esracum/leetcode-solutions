class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

      values_hash = {}  

      for index, value in enumerate(nums):
        require = target - value

        if require in values_hash:
            return [index, values_hash[require]]
        else:
            values_hash[value] = index

        


nums = [2, 7, 11, 15]
target = 9
solution = Solution()
result = solution.twoSum(nums,target)
print(result)

class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        count = 0
        nums_set = set(nums)
        max_count =0
       ##std::vector<int>maxCount;
        for num in nums_set:
            if num-1 not in nums_set:
              current_num= num
              current_count=1

              while current_num + 1 in nums_set:
                 current_num+=1
                 current_count+=1

              max_count=max(max_count, current_count)
        return max_count

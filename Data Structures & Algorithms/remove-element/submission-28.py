class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        i = 0
        n = len(nums)

        print(i, n)
        while (i < n):
            if (nums[i] == val):
                n = n - 1
                nums[i] = nums[n]
            else:
                i = i + 1  
            print(i, n)

        return n


        # while (i < len(nums)):
        #     if nums[i] == val:
        #         nums.pop(i)
        #     else:
        #         i +=1
        # return len(nums)
        
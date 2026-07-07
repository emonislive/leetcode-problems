# Time complexity: O(n * n!)
# Space complexity: O(n * n!)
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        temp, answer = [], []
        n = len(nums)

        def backtrack(index):
            if index == n:
                answer.append(temp[:]) 
                return

            for i in nums: 
                if i not in temp:
                    temp.append(i)
                    backtrack(index + 1)
                    temp.pop()
        index = 0       
        backtrack(index)
        return answer
    

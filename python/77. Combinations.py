# Time complexity: O(C(n, k) * k)
# C(n, k) combinations are generated
# Copying each combination takes O(k)
#
# Space complexity: O(k)
# Recursion stack + current combination
# (Ignoring the output list)

class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        answer = []

        def backtrack(index, current):
            # Base case
            if len(current) == k:
                answer.append(current.copy())
                return

            # Numbers still needed to complete the combination
            need = k - len(current)

            # Pruning:
            # Stop early if there aren't enough numbers left
            # Largest valid starting number is n - (need - 1)
            for i in range(index, n - (need - 1) + 1):
                # Choose
                current.append(i)

                # Explore
                backtrack(i + 1, current)

                # Backtrack
                current.pop()

        backtrack(1, [])
        return answer

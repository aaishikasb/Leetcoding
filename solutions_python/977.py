#Question 977

# Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, 
# also in sorted non-decreasing order.

# Example 1:

# Input: [-4, -1, 0, 3, 10]
# Output: [0, 1, 9, 16, 100]


def sortedSquares(A):
    return sorted([x**2 for x in A])


A = [-4, -1, 0, 3, 10]
print(sortedSquares(A))

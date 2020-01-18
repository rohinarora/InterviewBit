class Solution:
    # @param A : string
    # @return an integer
    def solve(self, A):
        count=0
        vowels = ["a","e","i","o","u"]
        for i in range(len(A)):
            if A[i].lower() in vowels:
                count=count+len(A)-i
        return (count%10003)

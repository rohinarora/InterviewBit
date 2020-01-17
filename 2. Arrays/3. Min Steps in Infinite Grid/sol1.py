class Solution:
    # @param A : list of integers
    # @param B : list of integers
    # @return an integer
    def coverPoints(self, A, B):
        steps=0
        for i in range(len(A)-1):
            start=[A[i],B[i]]
            end=[A[i+1],B[i+1]]
            steps = steps + max(abs(end[0]-start[0]),abs(end[1]-start[1]))
        return steps

A = [ 4, 8, -7, -5, -13, 9, -7, 8 ]
B = [ 4, -15, -10, -3, -13, 12, 8, -8 ]

print (Solution().coverPoints(A,B))

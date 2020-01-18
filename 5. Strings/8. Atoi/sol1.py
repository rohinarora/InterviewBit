class Solution:
    # @param A : string
    # @return an integer
    def atoi(self, A):
        A=A.strip()
        for idx in range(len(A)):
            if (A[idx].isnumeric()):
                break
        result=""
        for idx2 in range(idx,len(A)):
            if (A[idx2].isnumeric()==False):
                break
            result=result+A[idx2]
        if A[idx-1]=='-':
            result='-'+result
        return result

        #return int(A.split(" ")[0])

print (Solution().atoi("   -53423 88C340185Q 71 8079 834617385 2898422X5297Z6900"))

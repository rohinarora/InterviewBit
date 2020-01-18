class Solution:
    def isPalindrome(self,A):
        start=0
        end=len(A)-1
        A=A.lower()
        while(start<=end):
            if A[start].isalnum()==False:
                start=start+1
                continue
            if A[end].isalnum()==False:
                end=end-1
                continue
            if A[start]!=A[end]:
                return 0
            start=start+1
            end=end-1
        return 1

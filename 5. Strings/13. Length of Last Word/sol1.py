class Solution:
    # @param A : string
    # @return an integer
    def lengthOfLastWord(self, A):
        A=A.split(" ")
        if len(A)==1:
            return len(A[0])
        else:
            last_valid_word=""
            for i in range(len(A)):
                current=A[i]
                if current!="":
                    last_valid_word=current
            return len(last_valid_word)

print (Solution().lengthOfLastWord("Wordl   "))

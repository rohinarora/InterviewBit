class Solution:
    def find_substring(self,string1,string2):
        result=""
        for i in range(min(len(string1),len(string2))):
            if string1[i]==string2[i]:
                result=result+string1[i]
            else:
                break
        return result
    def longestCommonPrefix(self,input):
        if len(input)==1:
            return input[0]
        substring_start=input[0]
        for j in range(1,len(input)):
            substring_start=self.find_substring(substring_start,input[j])
        return substring_start

A = [ "abcd", "abcd", "efgh" ]
obj1=Solution()
print (obj1.longestCommonPrefix(A))

'''
Runtime: 28 ms, faster than 87.06% of Python3 online submissions for Longest Common Prefix.

'''

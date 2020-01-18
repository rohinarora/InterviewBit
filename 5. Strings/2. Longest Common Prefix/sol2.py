class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        result = ''
        for combn in zip(*strs):
            if len(set(combn)) != 1:
                return result
            else:
                result = result+ combn[0]
        return result

A = [ "abcd", "abce" , "abcf"]
obj1=Solution()
print (obj1.longestCommonPrefix(A))

'''
24 ms. 96%
'''

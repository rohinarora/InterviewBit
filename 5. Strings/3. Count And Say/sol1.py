class Solution:
    # @param num : integer
    # @return a strings
    def countAndSay(self, num):
        result = '1'
        for n in range(1, num):
            prev = result
            result = ''
            count = 1
            for i in range(1,len(prev)):
                if prev[i] == prev[i-1]:
                    count += 1
                else:
                    result += str(count) + prev[i-1]
                    count = 1
            result = result+ str(count) + prev[-1]
        return result
obj1=Solution()
print (obj1.countAndSay(5))


'''
Runtime: 28 ms, faster than 91.84% of Python3 online submissions for Count and Say.
'''

class Solution:
    def isPalindrome(self, s):
        s = ''.join(e for e in s if e.isalnum()).lower()
        return s==s[::-1]

'''
Runtime: 40 ms, faster than 84.89% of Python3 online submissions for Valid Palindrome.
'''

'''
Another solution- (but below takes O(n) space.
Does the above not take extra O(N) temportitly while RHS of line 3 is being computed?)

class Solution:
def isPalindrome(self, s):
    s= [i.lower() for i in s if i.isalnum()]
    return s == s[::-1]
'''

class Solution:
    # @param A : list of integers
    # @return an integer
    def maxArr(self,A):
        A_plus_i=[]
        A_minus_i=[]
        len_A=len(A)
        for i in range(len_A):
            A_plus_i.append(A[i]+i)
            A_minus_i.append(A[i]-i)
        first_comp=max(A_plus_i)-min(A_plus_i)
        second_comp=max(A_minus_i)-min(A_minus_i)
        return max(first_comp,second_comp)

import math
def maxArr(array):
    max1 = -math.inf
    min1 = math.inf
    max2 = -math.inf
    min2 = math.inf
    for i in range(len(array)):
        max1 = max(max1, array[i] + i)
        min1 = min(min1, array[i] + i)
        max2 = max(max2, array[i] - i)
        min2 = min(min2, array[i] - i)
    return max(max1 - min1, max2 - min2)

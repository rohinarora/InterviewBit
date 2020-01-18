* isAnagram-> piggy back on permute
* When going for Sudoku -
https://www.youtube.com/watch?v=p-gpaIGRCQI&feature=PlayList&p=FE6E58F856038C69&index=10
* N Queen-
https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/tutorial/
(Also screenshot on Desktop)
* Check
  * https://www.interviewbit.com/problems/reccmpl2/
  * https://www.interviewbit.com/problems/reccmpl3/
  * Generalize/remember the above pattern. Feels like DFS to me
* Recursive vs Iterative-
https://www.codeproject.com/Articles/21194/Iterative-vs-Recursive-Approaches
* N queen problem.
  * Can place in 16C4 ways. Naive
  * Constraint. Place each queen only in 1 row. So 4 choices for each queen. 4^4 ways.
  * Constraint. Place only 1 queen in 1 column. 4! ways left.
* Examples of recursion problems -
  * Print digits of a number in reverse order using Recursion.  
  * Write Recursive function that tells if a given string is palindrome or not.  
  * A Recursive function of binary search.
* Backtracking problems-
  * Solving a SuDoKu puzzle using recursion
  * Given a 2D array (MAZE) - Print path to go from one end to another.  
  * Given a matrix of alphabets -  Find a given word.


permute and subset problem- both have depth of tree N. We have N decisions to make. Depth of tree represents decisions to be made. Branching at each node tells choices at each step. Always 2 for subset subset problem. len(rest) in permute problem (goes from N at root to 1 at bottom)


https://www.geeksforgeeks.org/print-palindromic-permutations-given-string-alphabetic-order/
* General approach- https://leetcode.com/problems/palindrome-partitioning/discuss/182307/Java%3A-Backtracking-Template-General-Approach
* In the end- https://en.wikipedia.org/wiki/Backtracking

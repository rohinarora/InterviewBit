* Backtracking is trying out all possibilities using recursion, exactly like brute force. Recursion is fundamental to backtracking. Maybe prune based on some condition. Bounding function prunes the tree, saves run time (based on problem)
* In some contexts, we have no choice but to exhaustively examine all possibilities, such as when trying to find some globally optimal result. But what if we are interested in finding any solution, whichever one that works out first? At each decision point, we can choose one of the available options, and sally forth, hoping it works out. If we eventually reach our goal from here, we're happy and have no need to consider the paths not taken. However, if this choice didn't work out
and eventually leads to nothing but dead ends; when we backtrack to this decision point, we try one of the other alternatives.
* What’s interesting about backtracking is that we back up only as far as needed to reach a previous decision point with an as-yet-unexplored alternative. In general, that will be at the most recent decision point. Eventually, more and more of these decision points will have been fully explored, and we will have to backtrack further and further. If we backtrack all the way to our initial state and have explored all alternatives from there, we can conclude the particular problem
is unsolvable. In such a case, we will have done all the work of the exhaustive recursion and known that there is no viable solution possible
*  Suppose you have to make a series of decisions, among various choices, where :
  * You don’t have enough information to know what to choose
  * Each decision leads to a new set of choices
  * Some sequence of choices (possibly more than one) may be a solution to your problem
* Backtracking is a methodical way of trying out various sequences of decisions, until you find one that “works”. Example- Given a maze, find if a path from start to finish exists. At each intersection, you have to decide between three or fewer choices:
    * Go straight
    * Go left
    * Go right
* You don’t have enough information to choose correctly. Each choice leads to another set of choices. One or more sequences of choices may (or may not) lead to a solution.
* So, you explore each option thoroughly and once you cannot find a solution using the option selected, you come back and try one of the remaining options.
//A pseudocode for the above question would be :
```
boolean pathFound(Position p) {
  if (p is finish) return true;

  foreach option O from Position p {
    boolean isThereAPath = pathFound(O);
    if (isThereAPath) return true; // We found a path using option O
  }
  // We have tried all options from this position and none of the options lead to finish.
  // Hence there is no solution possible to finish
  return false;
}
```
//In general, the usual pseudocode for any backtracking solution is :
```
boolean solve(Node n) {
  if n is a goal node, return true
  // Or for exploration- when you run out of search space->
  // if (no more choices) return (Node n is goal state)

  foreach option c possible from n {
    try option c
    if solve(c) succeeds, return true
    unmake option c
  }
  return false // tried everything. Nothing found
}
```
* The total number of nodes explored in state space tree gives the total number of recursive calls done in backtracking.
* DP is used when optimization problems exists.
* Backtracking is DFS kind of exploration. Tree is generated and we keep hitting the roots and coming back (via recursion)
* The branch and bound algorithm is similar to backtracking but it is used for optimization problems. It performs a graph transversal on the space-state tree
* Difference between 'backtracking' and 'branch and bound'
https://stackoverflow.com/questions/30025421/difference-between-backtracking-and-branch-and-bound
* Branch and bound
  * http://www.csl.mtu.edu/cs4321/www/Lectures/Lecture%2027%20-%20Branch%20and%20Bound.htm

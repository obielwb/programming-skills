/*
The idea is to calculate, for each array position, the
maximum sum of a subarray that ends at that position. After this, the answer
for the problem is the maximum of those sums.
Consider the subproblem of finding the maximum-sum subarray that ends at
position k. There are two possibilities:
1. The subarray only contains the element at position k.
2. The subarray consists of a subarray that ends at position k −1, followed by
the element at position k.
In the latter case, since we want to find a subarray with maximum sum, the
subarray that ends at position k −1 should also have the maximum sum. Thus,
we can solve the problem efficiently by calculating the maximum subarray sum
for each ending position from left to right.
The following code implements the algorithm:
*/

int sum = 0, best = 0;
for (int i = 0; i < n; i++)
{
  sum = max(array[i], sum + array[i]);
  best = max(sum, best);
}

cout << best << endl;
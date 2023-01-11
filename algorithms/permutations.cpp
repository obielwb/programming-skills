// method 1 - recursion

// Each function call adds a new element to permutation. The array chosen
// indicates which elements are already included in the permutation. If the size of
// permutation equals the size of the set, a permutation has been generated.
void search()
{
  if (permutation.size() == n)
  {
    // process permutation
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      if (chosen[i])
        continue;
      chosen[i] = true;
      permutation.push_back(i);
      search();
      chosen[i] = false;
      permutation.pop_back();
    }
  }
}
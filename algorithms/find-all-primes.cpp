// While this name may sound scary, the sieve of Eratosthenes is probably the
// simplest way to pick out all the primes in a given range from 1 to n. As we already
// know, one of the properties that all primes have is that they do not have any
// factors except 1 and themselves. Therefore, if we cross out all composites, which
// have at least one factor, we can obtain all primes. The following code demonstrates
// a simple implementation of the said algorithm

// https://codeforces.com/blog/entry/54090

vector<int> prime;
bool is_composite[MAX];

void sieve(int n)
{
  // começo, fim, valor
  std::fill(is_composite, is_composite + n, false);

  for (int i = 2; i < n; ++i)
  {
    if (!is_composite[i])
      prime.push_back(i);
    for (int j = 2; i * j < n; ++j)
    {
      is_composite[i * j] = true;
    }
  }
}

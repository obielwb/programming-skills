ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  gcd(b, a % b);
}
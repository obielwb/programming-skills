/*
ID: gabriel127
PROG: ride
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  ofstream fout("ride.out");
  ifstream fin("ride.in");

  string a,
      b;
  fin >> a >> b;

  int a_product = 1;
  for (int i = 0; i < a.length(); i++)
  {
    a_product *= int(a[i]) - 64;
  }

  int b_product = 1;
  for (int i = 0; i < b.length(); i++)
  {
    b_product *= int(b[i]) - 64;
  }

  if (a_product % 47 == b_product % 47)
  {
    fout << "GO" << endl;
  }
  else
  {
    fout << "STAY" << endl;
  }
}
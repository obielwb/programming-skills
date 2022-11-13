#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

  int n_testes, n_messages, i, questions_not_answered;
  cin >> n_testes;
  string message;
  while (n_testes--)
  {
    cin >> n_messages;
    cin >> message;
    questions_not_answered = 0;

    for (i = 0; i < n_messages; i++)
    {
      if (message[i] == 'Q')
      {
        questions_not_answered++;
      }
      else
      {
        questions_not_answered--;
      }

      if (questions_not_answered <= 0)
      {
        questions_not_answered = 0;
      }
    }
    if (questions_not_answered == 0)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }
}
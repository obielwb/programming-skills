#include <iostream>
#include <string>

using namespace std;

const int maxn = 1005;

int vis[maxn][maxn], matriz[maxn][maxn];
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
int n, m;

// verifica se a posição x,y é valida
bool valid(int x, int y)
{
  if (0 <= x and x < n and 0 <= y and y < m)
    return true;
  return false;
}

void dfs(int x, int y)
{
  vis[x][y] = 1;

  for (int i = 0; i < 4; i++)
  {
    int novox = x + dx[i], novoy = y + dy[i];

    if (valid(novox, novoy) == false)
      continue;

    if (matriz[novox][novoy] == 1 or vis[novox][novoy] == 1)
      continue;

    dfs(novox, novoy);
  }

  return;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    string s;

    cin >> s;

    for (int j = 0; j < m; j++)
    {
      if (s[j] == #)
        matriz[i][j] = 1;
      else
        matriz[i][j] = 0;
    }
  }

  int res = 0;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    {
      if (matriz[i][j] == 1 or vis[i][j] == 1)
        continue;

      res++;
      dfs(i, j);
    }

  cout << res << endl;

  exit(0);
}
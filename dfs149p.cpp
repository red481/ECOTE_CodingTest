#include <bits/stdc++.h>
using namespace std;

int CLEN, RLEN;
int maps[1001][1001];

bool dfs(int n, int m)
{
  if(n <= -1 || n >= RLEN || m <= -1 || m >= CLEN)
  {
    return false;
  }
 if(maps[n][m] == 0)
 {
  maps[n][m] = 1;
  dfs(n + 1, m);
  dfs(n, m + 1);
  dfs(n - 1, m);
  dfs(n, m - 1);
  return true;
 } 
 return false;
}

int main() {
  
cin >> RLEN >> CLEN ;

for(int i = 0; i < RLEN; i++)
{
  for(int j = 0; j < CLEN; j++)
  {
    scanf("%1d", &maps[i][j]);
  }
}

int result = 0;
for(int i = 0; i < RLEN; i++)
{
  for(int j = 0; j < CLEN; j++)
  {
    if(dfs(i,j))
      {
      result += 1;
      }
  }
}

cout << result << endl;
}
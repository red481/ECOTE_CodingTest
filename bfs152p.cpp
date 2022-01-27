#include <bits/stdc++.h>

int RLEN, CLEN;
int maze[201][201];
using namespace std;

int main() {
  cin >> RLEN >> CLEN;
  
  for(int i = 0; i < RLEN; i++)
  {
    for(int j = 0; j < CLEN; j++)
    {
      scanf("%1d",&maze[i][j]);
    }
  }
  
  queue<pair<int, int>> q;

  q.push(make_pair(0, 0));

  
  int dx[4] = {-1, 0, 1, 0};
  int dy[4] = {0, -1, 0, 1};
  while(!q.empty())
  {
    pair<int, int> temp = q.front();
    q.pop();

    int x = temp.first;
    int y = temp.second;

    for(int i = 0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];
    if(nx <= -1 || nx >= RLEN || ny <= -1 || ny >= CLEN)
    continue;

    if(maze[nx][ny] == 0)
    continue;
    else if(maze[nx][ny] == 1)
    {maze[nx][ny] = maze[x][y] + 1;
    
    q.push(make_pair(nx, ny));
    }
    }
  
  }
  cout << maze[RLEN - 1][CLEN - 1];
}
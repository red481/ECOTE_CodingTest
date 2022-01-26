#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;

  cin>> N >> K ;

  int count = 0;
  while(N!=1)
  {
    if(N%K == 0)
    {N = N/K;}
    else
    N -= 1;
    
    count += 1;
  }
  
  cout << count << endl;
}
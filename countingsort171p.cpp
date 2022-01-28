#include <bits/stdc++.h>

int main() {
int arr[] = {5,3,6,9,14,26,43,25,79,12,13,1,2};

int arr2[80]{};

std::vector<int> v;

for(auto& ele : arr){
  arr2[ele] += 1;
}

int idx = 0;

for(int i = 0; i < 80; i++)
{
  for(int j = 0; j < arr2[i]; j++)
  {
    v.push_back(i);
  }
}

for(auto& ele : v)
  std::cout << ele << " " ;
}
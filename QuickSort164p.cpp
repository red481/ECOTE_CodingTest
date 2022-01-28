#include <iostream>



void QuickSort(int* arr, int start, int end)
{
  if(start >= end)
  return;

int pivot = start;
int left = start + 1;
int right = end;

while(left <= right)
{
  while(arr[pivot] >= arr[left] && left <= end)
    left++;
  while(arr[pivot] <= arr[right] && right > start)
    right--;

  if(left <= right)
    {
      int temp = arr[right];
      arr[right] = arr[left];
      arr[left] = temp;
    }
  else
  {
    int temp = arr[right];
      arr[right] = arr[start];
      arr[start] = temp;
  }
}

QuickSort(arr, start, right - 1);
QuickSort(arr, right + 1, end);
}

int main() {
  int arr [9] = {3,1,2,8,6,7,5,0,9};

  QuickSort(arr, 0, 8);

  for(auto& ele : arr)
  {
    std::cout << ele << " ";
  }
  
  }
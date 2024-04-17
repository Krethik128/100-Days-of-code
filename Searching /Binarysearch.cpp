#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int n, int key)
{
  int s = 0, e = n - 1;
  while (s <= e)
  {
    int mid = s + (e - s) / 2;
    if (a[mid] == key)
    {
      return mid;
    }
    else if (a[mid] > key)
    {
      e = mid - 1;
    }
    else
    {
      e = mid + 1;
    }
  }
  return -1;
}

int main()
{
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;
  int *a = new int[n];
  cout << "Enter the elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  std::sort(a, a + n);
  cout << "enter the key" << endl;
  int key;
  cin >> key;

  int pos = BinarySearch(a, n, key);
  if (pos == -1)
  {
    cout << "key is not found " << endl;
  }
  else
    cout << "key is found at index " << pos << endl;
  delete[] a;

  return 0;
}
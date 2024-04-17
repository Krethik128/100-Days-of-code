#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int a[], int n, int key)
{
  for (int i = 0; i < n; i++)
  {
    if (a[i] == key)
    {
      return i;
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
  cout << "enter the key" << endl;
  int key;
  cin >> key;

  int pos = LinearSearch(a, n, key);
  if (pos == -1)
  {
    cout << "key is not found " << endl;
  }
  else
    cout << "key is found at index " << pos << endl;
  delete[] a;

  return 0;
}
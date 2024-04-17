#include <iostream>
using namespace std;

void SelectionSort(int a[], int n)
{
  for (int i = 0; i <= n - 2; i++)
  {
    int min = i;

    for (int j = i + 1; j <= n - 1; j++)
    {

      if (a[j] < a[min])
      {
        min = j;
      }
    }
    swap(a[i], a[min]);
  }
}

int main()
{
  int i, n;
  cout << "enter the number of elements" << endl;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  SelectionSort(a, n);
  for (i = 0; i < n; i++)
  {
    cout << a[i] << endl;
  }
  return 0;
}
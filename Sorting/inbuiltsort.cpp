#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    // Input elements into the array
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sort the array using std::sort
    sort(arr, arr + n);

    // Output the sorted array
    cout << "Sorted elements are:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

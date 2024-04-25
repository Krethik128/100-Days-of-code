#include <iostream>
using namespace std;
int fun(int *arr, int idx, int n)
{
    if (idx == n - 1)
        return arr[idx];
    int result = max(arr[idx], fun(arr, idx + 1, n));
    return result;
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 10, 15};
    int result = fun(arr, 0, 7);
    cout << result << endl;
}
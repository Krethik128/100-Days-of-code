#include <iostream>

using namespace std;
int func(int *arr, int idx, int n)
{
    if (idx == n - 1)
        return arr[idx];
    return arr[idx] + func(arr, idx + 1, n);
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 10, 15};
    int result = func(arr, 0, 7);
    cout << result << endl;
    return 0;
}
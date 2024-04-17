#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    for (int step = 0; step < n; step++)
    {
        int flag = 0;
        for (int i = 0; i < n - step - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{
    int n, i;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];

    cout << "Enter the elements:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bubbleSort(a, n);

    cout << "Sorted array:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

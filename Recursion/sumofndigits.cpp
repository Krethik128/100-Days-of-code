#include <iostream>
using namespace std;
int fun(int n)
{
    if (n >= 0 and n <= 9)
    {
        return n;
    }
    return fun(n / 10) + (n % 10);
}
int main()
{
    int result = fun(12356);
    cout << result;
    return 0;
}
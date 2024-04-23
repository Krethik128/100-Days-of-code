#include <iostream>
using namespace std;
int fun(int p, int q)
{
    if (q==0 ){
        return 1;
    }
 
    return p * fun(p, q - 1);
}
int main()
{
    int result = fun(2, 4);
    cout << result;

    return 0;
}
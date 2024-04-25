#include <iostream>
using namespace std;
int fun(int p, int q)
{
    if (q==0 ){
        return 1;
    }
    if (q%2==0){
       int result= fun(p,q/2);
       return result*result;
    }
    else{
        int result =fun(p,(q-1)/2);
        return p*result*result;
    }
}
int main()
{
    int result = fun(2, 4);
    cout << result;

    return 0;
}
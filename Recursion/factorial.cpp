#include<iostream>
using namespace std;

  int fact(int n){
    if (n<0)
      return -1;
    if(n==0) return 1;
    int smallans=n*fact(n-1);
    return smallans;
  }

int main(){
     int n;
     cin>>n;
     cout<<n<<endl;
     int ans =fact(n);
     cout<<ans<<endl;
     return 0;
}
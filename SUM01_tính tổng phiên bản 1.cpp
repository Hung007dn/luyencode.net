//C++
#include <bits/stdc++.h>
using namespace std;
int tinhtong(int n){
    if(n<0) return false;
    return (n*(n+1))/2;
}
int main()
{
  int n;
  cin>>n;
  cout<<tinhtong(n);
    return 0;
}

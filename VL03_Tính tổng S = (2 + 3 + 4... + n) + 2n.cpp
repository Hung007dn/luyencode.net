//C++
#include <bits/stdc++.h>
using namespace std;
int tong2so(int n){
    if(n<2) return false;
    return (n*(n+1))/2 +2*n -1;
}
int main()
{
   int n;
   cin>>n;
   cout<<tong2so(n);
    return 0;
}

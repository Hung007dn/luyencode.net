//C++
#include <bits/stdc++.h>
using namespace std;
int main()
{
  double n;
  cin>>n;
  long long t=n;
  if (abs(n-t)>=0.5 && t>0){
      cout<<n+1-abs(n-t);
  } else {
      cout<<fixed<<setprecision(0)<<n;
  }
    return 0;
}

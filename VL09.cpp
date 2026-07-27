//C++
#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int a, n;
    cin >> a >> n; 
    int s = 0; 
    for(int i = a; i <= n; i++){
        if(i % 2 == 0) 
        s += i; 
        
    } 
    cout << s;
  return 0;
}

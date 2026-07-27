//C++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int count=0;
    for(char c:n){
        if(isdigit(c))
        {
         count++;
        }
    }
    cout<<count;
    return 0;
}

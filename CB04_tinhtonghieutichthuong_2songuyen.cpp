//C++
#include <bits/stdc++.h>
using namespace std;
int main() {
    double a,b;
    cin>>a>>b;
    int tong =a+b;
    int hieu =a-b;
    int tich=a*b;
    double thuong=a/b;
    cout<<tong<<endl;
    cout<<hieu<<endl;
    cout<<tich<<endl;
    if(b==0){
        cout<<"ERROR";
    } else
    {
    cout<<fixed<<setprecision(2)<<thuong;
    }
    return 0;
}

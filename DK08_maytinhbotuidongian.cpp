//C++
#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b;
	string s;
	cin>>a>>s>>b;
	if(s=="+")
	{
		cout<<fixed<<setprecision(2)<<a+b;
	}
	else if(s=="-")
	{
		cout<<fixed<<setprecision(2)<<a-b;
	}
	else if(s=="*")
	{
		cout<<fixed<<setprecision(2)<<a*b;
	} else if(s=="/" && b!=0)
	{
		cout<<fixed<<setprecision(2)<<a/b;
	} else {
		cout<<"Math Error";
	}
	return 0;
}

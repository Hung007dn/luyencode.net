//C++ 
#include <bits/stdc++.h>
using namespace std;
bool namnhuan(long long month, long long year){
    if(year<=0 || year > 100000){
        cout<<"INVALID";
    } else if((year%400==0) || (year%4==0 && year%100!=0)){
        return namnhuan;
    }
    return 0;
}
int month[12]={1,2,3,4,5,6,7,8,9,10,11,12};
int main()
{
  long long month, year;
  cin>>month>>year;
  if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
      cout<<31;
  } else if(month==4 || month==6 || month==9 || month==11){
      cout<<30;
  }else if(month==2){
      if(namnhuan(month,year)){
      cout<<29;
  } else{
      cout<<28;
   }
  } else {
      cout<<"INVALID";
  }
    return 0;
}

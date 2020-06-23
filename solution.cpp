#include <iostream>
#include<cmath>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int d0,d1;
long long int k;
cin>>k;
cin>>d0>>d1;
int sum=d0+d1;
int sumOfAllDigits=0;
int s=(2*sum)%10+(4*sum)%10+(8*sum)%10+(6*sum)%10;
int x=(k-3)%4;
int rem=0;
if(x==1)rem+=(2*sum)%10;
else if(x==2)rem+=(2*sum)%10+(4*sum)%10;
else rem+=(2*sum)%10+(4*sum)%10+(8*sum)%10;
sumOfAllDigits=d0+d1+sum%10+s*((k-3)/4)+rem;
if(sumOfAllDigits%3==0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}

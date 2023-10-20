#include <iostream>
using namespace std;
long long fa(int n)
{
long long f=1;
while(n>1)
{
f*=n;
n--;
}
return f;
}
main()
{
int n,k;
cin>>n>>k;
cout<<fa(n)/fa(k)/fa(n-k);
}
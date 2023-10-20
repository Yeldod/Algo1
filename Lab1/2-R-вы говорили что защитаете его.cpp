#include <iostream>

using namespace std;

int main()
{
    int k,m,n,vr=0,t;

    cin>>k>>m>>n;
    if ((n==0)||(k==0))cout<<vr; else
    if (n<=k)
        {
            vr=2*m; 
            cout<<vr;
        }
    t=n;
    if (n>k)
        while (n>0)
            {
                n-=k;
                vr+=2*m;
            }
    if ((!(k==0))&&(!(t==0))&&(t>k)) cout<<vr;

    return 0;
}
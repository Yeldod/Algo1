#include <iostream>
#include <cmath>
using namespace std;
 
int main() 
{
    double a, b, c, D, x1, x2, eps=1e-9;
    cin >> a >> b >> c;
    
    D=b*b-4.*a*c;
    
    if (D>eps) 
    {
        D=sqrt(D);
        x1=(-b+D)/(2.*a);
        x2=(-b-D)/(2.*a);
        if(fabs(x1)<eps) x1=0.;
        if(fabs(x2)<eps) x2=0.;
        cout << x1 << " " << x2 << "\n";
    }  
    else if (fabs(D)<eps)
    {
        x1=-b/(2.*a);
        if(fabs(x1)<eps) x1=0.;
        cout << x1 << "\n";
    }    
    
return 0;                 
}
#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
  int a,b,c,d;
  cin >> a >> b >> c;
  d = (b*b) + (-4*a*c);
   if ( d > 0)
  {
    d = sqrt(d);
    cout << ( -1 * b + d) /(2*a)<< ( -b - d)/(2*a);
  }
else if ( d == 0)
  {
    d = sqrt(d);
    cout << -b/(2*a);
  }
 
                 
}
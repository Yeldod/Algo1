#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    const int l = 109;
    int v, t, S, k;
    cin >> v >> t;
    S = abs(v) * t;
    k = S % l;
    if (k == 0)
        cout << 0 << endl;
    else
    {
        if (v < 0)
            cout << l - k << endl;
        else if (v > 0)
            cout << k << endl;
    }
    cin.get();
    return 0;
}
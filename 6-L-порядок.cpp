#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,x,t, b;
    cin >> n;
    vector<int> a;
    for(int i = 0 ; i < n; ++i){
        cin >> t;
        a.push_back(t);
    }
    cin >> x;
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    for(int i = 0; i < a.size(); ++i){
        if(a[i] < x){
            cout << i + 1;
            return 0;
        }
    }
    cout << a.size() + 1;
    return 0;
}
#include <iostream>
#include <iterator>
#include <stack>
#include <vector>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    stack<int, vector<int>> s;
    while (n-- > 0) {
        int x;
        cin >> x;
        s.push(x);
    }
    while (!s.empty()) {
        cout << s.top();
        s.pop();
        if (!s.empty()) cout << ' ';
    }
    cout << endl;
    return 0;
}
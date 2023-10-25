#include <iostream>
using namespace std;
int SumOfDigits(int n);
int main() {
cout << "Integer: "; int n; cin >> n;
int sum = SumOfDigits(n);
cout << "Sum: " << sum << endl;
cin.sync();
cin.get();
}
int SumOfDigits(int n) {
int sum = 0;
while (n) {
sum += n % 10;
n /= 10;
}
return sum;
}
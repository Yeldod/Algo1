#include "iostream"
#include "valarray"
using namespace std; 
int main(){
int n; cin>>n; valarray< int>a(n); for(int &i:a)cin>>i; 
a=a.cshift(-1); for(int &i:a)cout<< i<<' ';}
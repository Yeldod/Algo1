#include <iostream>
 
using namespace std;
 
int main(){
    int n(0),counter(0);
    cin >> n;
    int * arr = new int[n];
    for(int i = 0;i<n;++i){
        cin >> arr[i];
    }
    for(int i = 1;i<n;++i){
        if(arr[i] > arr[i-1])++counter;
    }
    cout << counter << "\n";
 
    delete [] arr;
 
    cout << endl;
    return 0;
}
#include <iostream>
#include <algorithm>
 
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        sort(a, a+n);
        cout << a[n-2] + a[n-1] << endl;
    }
    return 0;
}
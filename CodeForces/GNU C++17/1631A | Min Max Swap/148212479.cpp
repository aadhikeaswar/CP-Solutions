#include <iostream>
#include <algorithm>
 
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n], b[n], mxa{0}, mxb{0};
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        for(int i = 0; i < n; i++) if(b[i] < a[i]) swap(a[i], b[i]);
        for(int i = 0; i < n; i++) mxa = max(a[i], mxa), mxb = max(b[i], mxb);
        cout << mxa*mxb << endl;
    }
    return 0;
}
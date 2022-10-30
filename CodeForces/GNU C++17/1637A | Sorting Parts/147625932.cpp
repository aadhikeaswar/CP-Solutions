#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n], mx;
        for(int &i : a) cin >> i;
        mx = a[0];
        bool pos{false};
        for(int i : a) pos = (i < mx) || pos, mx = max(mx, i);
        cout << (pos? "YES" : "NO") << endl;
    }
    return 0;
}
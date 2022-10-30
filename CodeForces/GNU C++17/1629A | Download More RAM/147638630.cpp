#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        pair<int,int> a[n];
        for(auto &x : a) cin >> x.f;
        for(auto &x : a) cin >> x.s;
        sort(a, a+n);
        for(auto x : a) if(x.f <= k) k += x.s;
        cout << k << endl;
    }
    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;
int main() {
    ll t, n, l, r;
    cin >> t;
    while(t--){
        cin >> n >> l >> r;
        ll sol{0};
        vector<ll> a(n);
        for(ll &i : a) cin >> i;
        sort(a.begin(), a.end());
        for(int i = 0; i < n; i++) {
            ll ldist =  i, rdist = i;
            for(ll j =  n; j >= 1; j/=2) while(ldist + j < n && a[ldist + j] + a[i] < l) ldist += j;
            for(ll j =  n; j >= 1; j/=2) while(rdist + j < n && a[rdist + j] + a[i] <= r) rdist += j;
            if(rdist == i) continue;
            sol += (rdist-ldist);
        }
        cout << sol << endl;
    }
    return 0;
}
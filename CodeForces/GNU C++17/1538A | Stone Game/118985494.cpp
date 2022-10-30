#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll a[n+1], mn{INT64_MAX}, mnp, mx{INT64_MIN}, mxp;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            if(a[i] < mn) mn = a[i], mnp = i;
            if(a[i] > mx) mx = a[i], mxp = i;
        }
        cout << min(min(max(mnp,mxp), max(n-mnp, n- mxp) + 1), min((n-mxp) + mnp + 1, (n-mnp) + mxp + 1)) << endl;
    }
    return 0;
}
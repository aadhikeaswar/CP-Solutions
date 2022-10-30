#include <iostream>
typedef long long ll;
using namespace std;
 
int main() {
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll a[n], mn{INT64_MAX}, mni, x = 1, y = 1;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i]<mn) mni = i;
            mn = min(a[i], mn);
        }
        cout << n-1 << endl;
        while(y+mni<n) cout << mni + 1 << " " << mni+y+ 1 << " " << a[mni] << " " << a[mni] + y++ << endl;
        while(mni-x>-1) cout << mni + 1 << " " << (mni + 1) - x  << " " << a[mni] << " " << a[mni] + x++ << endl;
    }
    return 0;
}
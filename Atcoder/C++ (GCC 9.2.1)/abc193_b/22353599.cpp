#include <iostream>
typedef long long ll;
using namespace std;
int main() {
    ll n, a, p, x, mn{INT64_MAX};
    cin >> n;
    while(n--){
        cin >> a >> p >> x;
        if(a>=x) continue;
        else mn = min(p, mn);
    }
    if(mn==INT64_MAX) cout << -1;
    else cout << mn;
    return 0;
}

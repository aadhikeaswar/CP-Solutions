#include <iostream>
using namespace std;
typedef long long ll;
ll digitsChanged(ll x){
    ll sol{0};
    for(ll i  = 1; i <=  1e9; i *= 10) sol += x/i;
    return sol;
}
int main() {
    ll t, l, r;
    cin >> t;
    while(t--){
        cin >> l >> r;
        cout << digitsChanged(r) - digitsChanged(l) << endl;
    }
    return 0;
}
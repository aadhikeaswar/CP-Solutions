#include <iostream>
#include <set>
#include <cmath>
typedef long long ll;
using namespace std;
int main() {
    set<ll> expressed;
    ll n, sol{0};
    cin >> n;
    for(ll i = 2; i <= sqrt(n); i++){
        auto it = expressed.lower_bound(i);
        ll j = i*i;
        if((it != expressed.end() && *it>i) || it == expressed.end()) while(j<=n) sol++, expressed.insert(j), j*=i;
    }
    cout << n-sol;
    return 0;
}
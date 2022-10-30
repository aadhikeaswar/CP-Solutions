#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;
int main() {
    ll N, K, X;
    cin >> N >> K >> X;
    ll a[N];
    for(ll &i : a) cin >> i;
    for(ll &i : a) {
        if(K*X > i) K -= (i/X), i = i % X;
        else i -= K*X, K = 0;
    }
    sort(a, a + N);
    for(int i = N - 1; i >= 0 && K > 0; i--) a[i] = 0, K--;
    ll sol{0};
    for(ll i : a) sol += i;
    cout << sol;
    return 0;
}

#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;
int n, m;
ll pow2(int x){
    if(x == 0) return 1;
    ll tx = pow2(x/2);
    tx = (tx*tx)%m;
    if(x%2 == 1) tx = (tx*2) % m;
    return tx;
}
int main() {
    cin >> n >> m;
    vector<ll> subtract(n+1, 0);
    ll sol = pow2(n);
    for(int i = 1; i < n; i++) {
        if(n%i == 0){
            ll ts = (((pow2(i)%m) - (subtract[i]%m)) + m)%m;
            sol = (((sol%m) - (ts%m)) + m) % m;
            for(int j = i; j < n; j += i) subtract[j] = (subtract[j] + ts)%m;
        }
    }
    cout << sol;
    return 0;
}

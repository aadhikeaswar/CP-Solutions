#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        long long sum{0}, mx{0}, x;
        while(n--){
            cin >> x;
            sum += x, mx = max(mx, x);
        }
        if(mx == 0) cout << 0;
        else cout << (2*mx <= sum ? 1 : 2*mx - sum);
        cout << endl;
    }
    return 0;
}
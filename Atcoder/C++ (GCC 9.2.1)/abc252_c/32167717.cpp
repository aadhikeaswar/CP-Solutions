#include <iostream>
typedef long long ll;
using namespace std;
int main() {
    int n;
    cin >> n;
    ll a[n], b[10], c[n][10], sol{INT64_MAX}, cnt[10][n];
    for(ll &i : a) cin >> i;
    for(ll &i : b) i = -1;
    for(auto &i : cnt)for(ll &j : i) j = 0;
    for(int i = 0; i < n; i++) for(int j = 9; j >= 0; j--) c[i][j] = a[i] % 10, a[i] /= 10;
    for(int i = 0; i <= 9; i++) for(int j = 0; j < n; j++)  {
        b[c[j][i]] = max(((cnt[i][c[j][i]] > 0) ? cnt[i][c[j][i]]*10 + i : i), b[c[j][i]]),cnt[i][c[j][i]]++;
    }
    for(ll i : b) sol = min(sol, i);
    cout << sol << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n], pref[n], sol{0};
        for(int &i : a) cin >> i;
        for(int i = 0; i < n; i++) pref[i] = (a[i] == 0 ? 1 : 0) + (i == 0 ? 0 : pref[i-1]);
        for(int i = 0; i < n; i++) for(int j = 0; i + j < n; j++) sol += j + 1 + pref[i + j] - (i == 0? 0 : pref[i-1]);
        cout << sol << endl;
    }
    return 0;
}
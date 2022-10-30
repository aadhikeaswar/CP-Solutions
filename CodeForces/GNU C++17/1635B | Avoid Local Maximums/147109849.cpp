#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n], sol{0};
        vector<bool> vis(n, false);
        for(int &i : a) cin >> i;
        for(int i = 1; i < n-1; i++) if(a[i] > a[i-1] && a[i] > a[i + 1]) {
            if(vis[i-1]) a[i-1] = a[i];
            else a[i + 1] = a[i], sol++, vis[i + 1] = true;
        }
        cout << sol << endl;
        for(int i : a) cout << i << " ";
        cout << endl;
    }
    return 0;
}
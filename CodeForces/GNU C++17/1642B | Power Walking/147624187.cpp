#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n;
        map<int, bool> a;
        int sol = 0;
        for(int i = 0; i < n; i++){
            cin >> x;
            sol += (a[x] ? 0 : 1), a[x] = true;
        }
        for(int i = 0; i < n; i++) cout << (i < sol? sol : i + 1)  << " ";
        cout << endl;
    }
    return 0;
}
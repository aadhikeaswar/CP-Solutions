#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n;
        vector<vector<int>> a(150001);
        for(int i = 1; i <= n; i++){
            cin >> x;
            a[x].push_back(i);
        }
        int sol{-1};
        for(auto i : a){
            if(i.size() <= 1) continue;
            int c{0}, d{n};
            for(int j = 0; j < i.size() - 1; j++) if(d - c > i[j+1] - i[j]) d = i[j+1], c = i[j];
            sol = max(((c + n) - d), sol);
        }
        cout << sol << endl;
    }
    return 0;
}
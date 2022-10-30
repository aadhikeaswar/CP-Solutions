#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n;
        set<int> a;
        for(int i = 0; i < n; i++){
            cin >> x;
            a.insert(x);
        }
        for(int i = 0; i < n; i++) cout << (i < a.size()? a.size() : i + 1)  << " ";
        cout << endl;
    }
    return 0;
}
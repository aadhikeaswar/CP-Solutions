#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k;
    cin >> t;
    while(t--){
        string s;
        cin >> n >> k >> s;
        if(k == 0) cout << 1 << endl;
        else{
            bool pal{true};
            for(int i = 0; (i < n - i -1) && pal; i++) pal = s[i] ==  s[n - i - 1];
            cout << (pal? 1 : 2) << endl;
        }
    }
    return 0;
}
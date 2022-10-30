#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n], li{n-1}, sol{0};
        for(int &i : a) cin >> i;
        while(li > 0){
            while(li > 0 && a[li-1] == a[n-1]) li--;
            if(li == 0) break;
            sol++;
            for(int i = 1; i <= n - li; i++) if(li - i > 0) a[li - i] = a[n-1];
            li -= (n - li);
        }
        cout << sol << endl;
    }
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n], cnt[101];
        for(int &i : a) cin >> i;
        for(int &i : cnt) i = 0;
        bool flag{false};
        for(int i : a) cnt[i]++, flag |= (cnt[i] == 2);
        if(cnt[0] == 0) cout << (n + (flag? 0 : 1)) << endl;
        else cout << n - cnt[0] << endl;
    }
    return 0;
}
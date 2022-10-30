#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, mx, mxt{1}, mn, mnt{1}, x;
    cin >> n >> x;
    mx = mn = x;
    for(int i = 1; i < n; i++) {
        cin >> x;
        if(x > mx) mx = x, mxt = 1;
        else if (x == mx) mxt++;
        if(x < mn) mn = x, mnt = 1;
        else if (x == mn) mnt++;
    }
    if(mx!=mn) cout << mx - mn << " " << mnt*mxt;
    else cout << 0 << " " << (n*(n-1))/2;
    return 0;
}
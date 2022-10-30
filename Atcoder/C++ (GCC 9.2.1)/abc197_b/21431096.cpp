#include <iostream>
using namespace std;
int main() {
    int n, mx{0}, mn{1001}, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        mx = max(x,mx);
    }
    for(int i = 0; i < n; i++){
        cin >> x;
        mn = min(x,mn);
    }
    if(mx>mn) cout << 0;
    else cout << mn-mx+1;
    return 0;
}

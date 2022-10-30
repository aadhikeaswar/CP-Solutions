#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, s;
    cin >> n >> s;
    s--;
    int a[n], b[n], x;
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    if(!a[0]) cout << "No";
    else if(a[s]) cout << "Yes";
    else if(b[s]) {
        for (x = s + 1; x < n; x++) if (a[x] == b[x] && a[x]) break;
        cout << (x < n && (a[x] == b[x] && a[x]) ? "Yes" : "No");
    }
    else cout << "No";
    cout << endl;
    return 0;
}
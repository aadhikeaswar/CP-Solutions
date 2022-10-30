#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        pair<int,int> vert[3];
        for(auto &i : vert) cin >> i.f >> i.s;
        int sol = 0;
        for(int i = 0; i < 3; i++) if(vert[i].s == vert[(i + 1)%3].s && vert[i].s > vert[(i + 2)%3].s) sol = abs(vert[i].f - vert[(i + 1)%3].f);
        cout << sol << endl;
    }
    return 0;
}
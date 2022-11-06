#include <iostream>
#include <vector>
#include <algorithm>
#define f first
#define s second
using namespace std;
int main() {
    int y, n;
    cin >> y;
    while(y--){
        cin >> n;
        vector<pair<int,int>> singers(n);
        vector<int> lbs(n), ubs(n), points(n, 0);
        for(auto &i : singers) cin >> i.f >> i.s;
        for(int i = 0; i < n; i++) lbs[i] = singers[i].f, ubs[i] = singers[i].s;
        sort(lbs.begin(), lbs.end());
        sort(ubs.begin(), ubs.end());
        for(int i = 0; i < n; i++) {
            int lwin{0}, uwin{0};
            for(int t = n/2; t > 0; t/=2){
                while(lwin + t < n && lbs[lwin + t] <= singers[i].f) lwin += t;
                while(uwin + t < n && ubs[uwin + t] <= singers[i].s) uwin += t;
            }
            cout << uwin + ((n-1) - lwin) << " ";
        }
        cout << endl;
    }
    return 0;
}

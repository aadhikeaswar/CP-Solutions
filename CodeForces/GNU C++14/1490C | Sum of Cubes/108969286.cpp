#include <iostream>
#include <map>
typedef long long ll;
using namespace std;
int main() {
    ll cubes[10001];
    map<ll,bool> cube;
    for(ll i = 1; i <= 10000; i++) cubes[i] = i * i * i, cube[cubes[i]] = true;
    int t;
    cin >> t;
    while(t--){
        ll n, x{1};
        bool isCube = false;
        cin >> n;
        while(cubes[x]<n) x++;
        for(int i = x-1; i > 0; i--) {
            if(cube[n-cubes[i]]) {
                cout << "YES" << endl;
                isCube = true;
                break;
            }
        }
        if(!isCube) cout << "NO" << endl;
    }
    return 0;
}
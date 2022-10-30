#include <iostream>
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    int a[n], r{0}, x{0}, sol{0};
    for(int &i : a) cin >> i;
    for(int i = 0; i < n; i++){
        while( r < n && x + a[r] <= t) x += a[r], r++;
        sol = max(sol, r - i), x -= a[i];
    }
    cout << sol << endl;
    return 0;
}
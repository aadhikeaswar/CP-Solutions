#include <iostream>
#include <iomanip>
using namespace std;
typedef long long ll;
ll n, x[60000], v[60000], nmx{INT64_MIN}, smn{INT64_MAX};
double sol;
bool timePos(double time){
    double lmax{INT32_MIN}, rmin{INT32_MAX};
    for(int i = 0; i < n; i++) lmax = max(x[i] -v[i]*time, lmax), rmin  = min(rmin, x[i] + v[i]*time);
    return lmax <= rmin;
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x[i];
        nmx = max(x[i], nmx), smn = min(x[i], smn);
    }
    for(int i = 0; i < n; i++) cin  >> v[i];
    sol = nmx - smn;
    for(double i = sol; i >= 1e-7; i /= 2) while(timePos(sol-i)) sol -= i;
    cout << fixed << setprecision(6) << sol;
    return 0;
}
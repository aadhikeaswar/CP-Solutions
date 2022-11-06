#include <iostream>
using namespace std;
long long a[1000000], b[1000000], x, sol{INT64_MIN}, si[1000000], ib[1000000], sj[1000000];
int n;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> b[0];
    for(int i = 1; i < n; i++){
        cin >> x;
        b[i] = b[i-1] +x;
    }
    for(int i = 0; i < n; i++) sol = max(sol, a[i]);
    si[n-1] = a[n-1] + b[n-2];
    for(int i = n-2; i > 0; i--) si[i] = max(si[i+1], a[i]+b[i-1]);
    for(int i = 0; i < n-1; i++) sol = max(a[i]-b[i]+si[i+1], sol);
    sj[0] = a[0];
    for(int i = 1; i < n; i++) sj[i] = max(sj[i-1], a[i]+b[i-1]);
    ib[n-1] = a[n-1];
    for(int i = n-2; i > 0; i--) ib[i] = max(ib[i+1], a[i] + b[n-1]-b[i]);
    for(int i = 0; i < n-1; i++) sol = max(sol, sj[i]+ib[i+1]);
    cout << sol;
    return 0;
}

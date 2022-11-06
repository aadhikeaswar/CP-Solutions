#include <iostream>
using namespace std;
int bp[1000001], fp[1000001], arr[1000001], n, k, sol{INT32_MIN};
int main() {
    cin >> n >> k;
    for(int i = 1; i <=n; i++) cin >> arr[i];
    bp[1] = arr[1], bp[2] = arr[2] + arr[1];
    for(int i = 3; i <= n; i++) bp[i] = arr[i] + max(bp[i-1], bp[i-2]);
    fp[k] = 0, fp[k-1] = 0;
    for(int i = k+1; i <= n; i++) fp[i] = arr[i] + max(fp[i-1], fp[i-2]);
    for(int i = k; i <= n; i++) sol = max(sol, bp[i]+fp[i]-arr[i]);
    cout << sol;
    return 0;
}

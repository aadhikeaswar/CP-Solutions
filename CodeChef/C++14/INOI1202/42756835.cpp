#include <iostream>
using namespace std;
int main() {
    int n, sol{0};
    cin >> n;
    int a[n], b[n+1], c[n+1];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] += i+1;
    }
    b[0] = a[0], c[n-1] = a[n-1], b[n] = c[n] = 0;
    for(int i = 1; i <= n; i++) b[i] = max(b[i-1], a[i]), c[n-i] = max(c[n-i+1], a[n-i]);
    for(int i = 0; i < n; i++) cout << max(i+b[n-1-i], i + c[n-1-i] -n) << " ";
}

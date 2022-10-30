#include <iostream>
using namespace std;
int main() {
    int n, m, x;
    long long p{0}, v{0};
    cin >> n;
    int arr[n+1];
    for(int i = 1; i <= n; i++) {
        cin >> m;
        arr[m] = i;
    }
    cin >> m;
    while (m--){
        cin >> x;
        p += arr[x], v += n-arr[x]+1;
    }
    cout << p << " " << v;
   return 0;
}
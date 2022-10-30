#include <iostream>
#include <algorithm>
 
typedef long long ll;
using namespace std;
int main() {
    int n;
    bool dtr{false};
    cin >> n;
    ll arr[n];
    for(ll &i : arr) cin >> i;
    sort(arr, arr+n);
    for(int i = 1; i<n-1; i++) if(arr[i-1]+arr[i]>arr[i+1]) dtr = true;
    if(dtr) cout << "YES";
    else cout << "NO";
    return 0;
}
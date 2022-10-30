#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        long long arr[n], mp{1}, sum{0}, mx{0};
        for(long long &i : arr) {
            cin >> i;
            while(i % 2 == 0) i /= 2, mp *= 2;
            sum += i, mx = max(i, mx);
        }
        cout << (sum - mx) + (mx*mp) << endl;
 
    }
    return 0;
}
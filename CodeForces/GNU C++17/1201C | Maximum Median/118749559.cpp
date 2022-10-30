#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll n, k, arr[200000];
ll opsReq(ll x){
    ll rValue{0};
    for(int i = n-1; i >= n/2; i--) if(x > arr[i]) rValue += x - arr[i];
    return rValue;
}
int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    ll sol = arr[n/2];
    for(int t = k; t >= 1; t /= 2){
        while(opsReq(sol+t) <= k) sol += t;
    }
    cout << sol;
    return 0;
}
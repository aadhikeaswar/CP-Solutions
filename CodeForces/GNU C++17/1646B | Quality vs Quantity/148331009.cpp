#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long t, n;
    cin >> t;
    while(t--){
        cin >> n;
        long long a[n], c = n/2, sm{0}, bm{0}, i = 1, j = n-1;
        for(long long &k : a) cin >> k;
        sort(a, a+n);
        sm += a[0];
        while(j > i) {
            sm += a[i], bm += a[j], i++, j--;
            if(bm > sm) break;
        }
        cout << (bm > sm ? "yes" : "no") << endl;
    }
    return 0;
}
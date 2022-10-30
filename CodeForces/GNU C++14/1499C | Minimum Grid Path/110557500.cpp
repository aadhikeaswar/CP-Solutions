#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        long long arr[n];
        for(long long &i : arr) cin >> i;
        long long minX{arr[0]}, minY{INT32_MAX};
        long long sol{INT64_MAX}, prex{arr[0]}, prey{0}, xSum{arr[0]*n}, ySum{INT64_MAX};
        for(int i = 2; i <= n; i++) {
            if(i%2==1) minX = min(minX, arr[i-1]), prex+= arr[i-1], xSum = prex + (n-((i/2)+1))*minX, sol = min(sol, xSum+ySum);
            else minY= min(minY,arr[i-1]), prey+= arr[i-1], ySum = prey + (n-(i/2))*minY, sol = min(sol, xSum+ySum);
        }
        cout << sol << endl;
    }
    return 0;
}
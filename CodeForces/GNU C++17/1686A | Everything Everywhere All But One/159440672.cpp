#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        double a[n], sum{0};
        for(double &i : a) cin >>i;
        for(double i : a) sum += i;
        bool flag{false};
        int i{0};
        while(!flag && i < n) flag = (sum-a[i])/(n-1) == a[i], i++;
        cout << (flag? "YES" : "NO") << endl;
    }
    return 0;
}
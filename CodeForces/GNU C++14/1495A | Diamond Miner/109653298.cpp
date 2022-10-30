#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
 
using namespace std;
int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio();
    int t;
    cin >> t;
    while(t--){
        int n, x, y, t1{0}, t2{0};
        cin >> n;
        long long diamonds[n], miners[n] ;
        for(int i = 0; i < 2*n; i++){
            cin >> x >> y;
            if(x==0) miners[t2++] = abs(y);
            else diamonds[t1++] = abs(x);
        }
        sort(diamonds, diamonds+n);
        sort(miners, miners+n);
        cout << fixed << setprecision(12);
        double sol{0};
        for(int i = 0; i < n; i++) sol += sqrt(diamonds[i]*diamonds[i]+miners[i]*miners[i]);
        cout << sol << endl;
    }
    return 0;
}
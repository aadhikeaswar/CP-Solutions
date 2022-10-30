#include <iostream>
#include <algorithm>
 
using namespace std;
int main() {
    int t, n, h;
    cin >> t;
    while(t--){
        cin >> n >> h;
        int a[n];
        for(int &i : a) cin >> i;
        sort(a, a+n);
        int a1{a[n-1]}, a2{a[n-2]}, am{a1+a2}, sol{h/am}, check = h % am;
        if(check == 0) cout << sol*2;
        if(check > 0) cout << sol*2 + (a1 >= check? 1 : 2);
        cout << endl;
    }
    return 0;
}
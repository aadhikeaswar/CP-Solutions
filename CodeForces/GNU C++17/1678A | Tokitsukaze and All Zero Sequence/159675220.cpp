#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n], cntz{0};
        for(int &i : a) cin >> i;
        for(int i : a) if(i == 0) cntz++;
        if(cntz == 0){
            sort(a, a+n);
            bool flag{false};
            for(int i = 0; i < n - 1; i++) if(a[i] == a[i+1]) flag = true;
            cout << (n + (flag? 0 : 1)) << endl;
        }
        else cout << n - cntz << endl;
    }
    return 0;
}
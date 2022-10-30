#include <iostream>
using namespace std;
int main() {
    int t, n, x;
    bool ps[10001];
    for(bool &j : ps) j = false;
    for(int i = 1; i <= 100; i++) ps[i*i] = true;
    cin >> t;
    while(t--){
        bool aps{true};
        cin >> n;
        for(int i = 0; i < n; i++){
            cin  >> x;
            aps = aps && ps[x];
        }
        if(aps) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}
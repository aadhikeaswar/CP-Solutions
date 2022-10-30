#include <iostream>
using namespace std;
int main() {
    int t, n, k, i;
    cin >> t;
    while(t--){
        cin >> n >> k;
        string s;
        cin >> s;
        bool sol{true};
        for(i = 0; i < k; i++) if(s[i] != s[(n-1)-i]) sol =  false;
        if(sol && 2*k < n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
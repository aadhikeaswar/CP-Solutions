#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int sol;
        for(int i = 0; (1 << i) <= n; i++) if((n >> i) & 1 == 1) sol = (1 << i);
        cout << sol - 1 << endl;
    }
    return 0;
}
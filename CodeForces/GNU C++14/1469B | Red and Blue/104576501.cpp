#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int sol{0}, temp{2};
        while(temp--){
            int n, best{0};
            cin >> n;
            int prefix[n];
            cin >> prefix[0];
            best = max(best,prefix[0]);
            for(int i = 1; i < n; i++){
                int x;
                cin >> x;
                prefix[i] = prefix[i-1] + x, best = max(best,prefix[i]);
            }
            sol+= best;
        }
        cout << sol << endl;
    }
    return 0;
}
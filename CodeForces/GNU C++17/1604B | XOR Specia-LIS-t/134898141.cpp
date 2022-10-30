#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        bool op{false};
        for(int &i : a) cin >> i;
        if(n%2 == 0){
            cout << "YES" << endl;
            continue;
        }
        for(int i = n-1; i > 0; i--) if(a[i] <= a[i-1]) op = true;
        cout << (op?"YES" : "NO") << endl;
    }
    return 0;
}
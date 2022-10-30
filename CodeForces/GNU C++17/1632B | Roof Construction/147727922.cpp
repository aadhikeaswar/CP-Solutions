#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n], sol{1};
        while(sol*2 < n) sol *= 2;
        a[sol] = sol, a[sol - 1] = 0;
        for(int i = 0; i < sol - 1; i++) a[i] = i + 1;
        for(int i = sol + 1; i < n; i++) a[i] = i;
        for(int i : a) cout << i << " ";
        cout << endl;
    }
    return 0;
}
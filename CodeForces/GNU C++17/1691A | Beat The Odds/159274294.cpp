#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n], sol{0};
        for(int &i : a) cin >> i;
        for(int i : a) if(i % 2 == 0) sol++;
        cout << min(sol, n - sol) << endl;
    }
    return 0;
}
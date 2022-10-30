#include <iostream>
using namespace std;
int main() {
    int n, t;
    cin >> t;
    while(t--){
        cin >> n;
        if(n % 3 > 1) cout << n/3 << " " << (n/3) + 1 << endl;
        else cout << n - 2*(n/3)  << " " << n/3 << endl;
    }
    return 0;
}
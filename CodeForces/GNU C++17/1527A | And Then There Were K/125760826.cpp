#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int temp = 1;
        while (2 * temp <= n) temp *= 2;
        cout << temp - 1 << endl;
    }
    return 0;
}
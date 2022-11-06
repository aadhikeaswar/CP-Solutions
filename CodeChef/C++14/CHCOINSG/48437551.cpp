#include <iostream>
using namespace std;
int main() {
    int n, t;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << (n % 6 != 0 ? "Chef" : "Misha") << endl;
    }
    return 0;
}

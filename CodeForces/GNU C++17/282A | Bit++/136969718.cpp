#include <iostream>
using namespace std;
int main() {
    int n, x{0};
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        x += (s == "++X" || s == "X++") ? 1 : -1;
    }
    cout << x;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int t, x;
    cin >> t;
    while(t--){
        string s;
        cin >> x >> s;
        if(x == 1 || s == "01" || s == "10") cout << "yes";
        else cout << "no";
        cout << endl;
    }
    return 0;
}
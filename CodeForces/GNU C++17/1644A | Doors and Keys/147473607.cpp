#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char, bool> key;
        bool pos{true};
        for(char a : s) pos = (((int) a > 90) || key[(char) ((int) a + 32)]) && pos, key[a] = true;
        cout << (pos? "YES" : "NO") << endl;
    }
    return 0;
}
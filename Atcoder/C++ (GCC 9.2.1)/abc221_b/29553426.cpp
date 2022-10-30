#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    bool adj{false}, typo{false};
    for(int i = 0; i < s.size() - 1; i++) if(s[i] != t[i]) {
        if((s[i] == t[i + 1] && t[i] == s[i + 1]) && !adj) adj = true, i++;
        else typo = true;
    }
    cout << (typo? "No" : "Yes");
    return 0;
}

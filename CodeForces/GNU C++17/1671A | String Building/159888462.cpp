#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        bool flag{true};
        for(int i = 0; i < s.size(); i++){
            flag &= i + 1 < s.size() && s[i + 1] == s[i];
            while(s[i + 1] == s[i]) i++;
        }
        cout << (flag? "YES" : "NO") << endl;
    }
    return 0;
}
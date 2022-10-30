#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        char c[s.size()+1];
        int skip{INT32_MAX};
        bool pos{false};
        for(int i = 0; i < s.size(); i++) {
            if(!pos && s[i]!='a') c[s.size()-i] = 'a', pos = true, skip = s.size()-i;
        }
        for(int i = 0; i < s.size(); i++){
            if(pos && i >= skip) c[i+1] = s[i];
            else c[i] = s[i];
        }
        if(!pos) cout << "NO";
        else {
            cout << "YES" << endl;
            for(char i : c) cout << i;
        }
        cout << endl;
    }
    return 0;
}
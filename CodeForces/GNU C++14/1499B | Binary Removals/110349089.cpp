#include <iostream>
using namespace std;
int main() {
    int t;
    string s;
    cin >> t;
    while(t--){
        bool t1s{false}, t0s{false};
        cin >> s;
        for(int i = 0; i < s.size()-1; i++) {
            if(!t1s && s[i] == '1' && s[i]==s[i+1]) t1s = true;
            else if (t1s && s[i] == '0' && s[i] == s[i+1]){
                t0s = true;
                break;
            }
        }
        if(t1s && t0s) cout << "nO";
        else cout << "yEs";
        cout << endl;
    }
    return 0;
}
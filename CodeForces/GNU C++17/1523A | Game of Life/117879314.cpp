#include <iostream>
using namespace std;
int main() {
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        string s;
        bool hasOne{false};
        cin >> s;
        for(char i : s) if(i == '1') hasOne = true;
        if(!hasOne) {
            cout << s << endl;
            continue;
        }
        else {
                if(m > n) m = n;
                for(int i = 0; i < m; i++){
                    string s1{s};
                    for(int j = 0; j < n; j++) if(s[j] != '1') if((j > 0 && s[j-1] == '1') ^ (j < n-1 && s[j+1] == '1')) s1[j] = '1';
                    s = s1;
                }
                for(char i : s) cout << i;
                cout << endl;
        }
    }
    return 0;
}
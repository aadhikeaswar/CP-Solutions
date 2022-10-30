#include <iostream>
#include <algorithm>
 
using namespace std;
int main() {
    int q;
    cin >> q;
    while(q--){
        string s, t;
        cin >> s >> t;
        int n = s.size(), m = t.size();
        bool sol{false};
        for(int i = 0; i < n; i++){
            int j = 0, ti = i;
            if(s[i] != t[j]) continue;
            while (ti < n  && j < m  && s[ti] == t[j]){
                string st = ".";
                int rem = (m-j) -1;
                if(rem <= ti) st = s.substr(ti-rem , rem);
                reverse(st.begin(), st.end());
                if( j == m-1 || st == t.substr(j+1, rem) ) {
                    sol = true;
                    break;
                }
                if(s[ti] == t[j]) ti++, j++;
            }
            if(sol) break;
        }
        cout << (sol ? "YES" : "NO") << endl;
    }
    return 0;
}
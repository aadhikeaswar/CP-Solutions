#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    string s[n];
    for(string &i : s) cin >> i;
    vector<vector<bool>> cnt(n, vector<bool> (26, false));
    for(int i = 0; i < n; i++) for(char c : s[i]) cnt[i][(int) c - 97] = true;
    int sol{0};
    for(int i = 0; i < (1 << n); i++){
        int tsol{0};
        for(int m = 0; m < 26; m++) {
            int tp{0};
            for(int j = i, l = 0; j > 0; j /= 2, l++) if(j % 2 == 1 && cnt[l][m]) tp++;
            if(tp == k) tsol++;
        }
        sol = max(tsol, sol);
    }
    cout << sol;
    return 0;
}

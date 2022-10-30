#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<char> a(n);
        for(char &i : a) cin >> i;
        vector<char> b = a;
        sort(a.begin(), a.end());
        int sol{0};
        for(int i = 0; i < n; i++) sol += (a[i] != b[i]) ? 1 : 0;
        cout << sol << endl;
    }
    return 0;
}
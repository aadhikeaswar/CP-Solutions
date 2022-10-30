#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
    int t, n, k, x;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<int> sol(n, 0);
        map<int, vector<int>> count;
        int m{0};
        for(int i = 0; i < n; i++) {
            cin >> x;
            if(count[x].size() < k) count[x].push_back(i), m++;
        }
        m -= m % k;
        for(const auto& i : count) for(int j : i.second) {
            sol[j] = (m%k) + 1, m--;
            if(m == 0) goto _output;
        }
        _output:
        for(int i : sol) cout << i << " ";
        cout << endl;
    }
    return 0;
}
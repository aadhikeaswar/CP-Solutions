#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k, temp;
    cin >> n >> k;
    int a[n], lk = (n/k) + (n % k > 0? 1 : 0);
    for(int &i : a) cin >> i;
    vector<vector<int>> seqs(k);
    for(int i = 0; i < k; i++) for(int j = i; j < n; j += k) seqs[i].push_back(a[j]);
    for(auto &x : seqs) sort(x.begin(), x.end());
    bool flag{false}, sol{true};
    stack<int> scheck;
    while(!flag) {
        int tp{0};
        for(int i = k - 1, j = 0; i >= 0;  i--) {
            if(!seqs[i].empty() && seqs[i].size() == lk) scheck.push(seqs[i].back()), seqs[i].pop_back(), j++;
            flag = (i == 0) && (j == 0), tp = max(tp, (int) seqs[i].size());
        }
        lk = tp;
    }
    do {
        temp = scheck.top(), scheck.pop();
        if(!scheck.empty()) sol &= temp <= scheck.top();
    }
    while(sol && !scheck.empty());
    cout << (sol? "Yes" : "No");
    return 0;
}

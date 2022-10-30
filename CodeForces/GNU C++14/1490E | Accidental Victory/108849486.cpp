#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;
bool comp(pair<int,int> a, pair<int,int> b){return a.first<b.first;}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        pair<ll, ll> a[n];
        ll pre[n];
        for(int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i+1;
        }
        sort(a,a+n, comp);
        pre[0] = a[0].first;
        for(int i = 1; i < n; i++) pre[i] = a[i].first + pre[i-1];
        vector<int> s;
        s.push_back(a[n-1].second);
        for(int i = n-2; i >= 0; i-- ) {
            if(pre[i]>=a[i+1].first) s.push_back(a[i].second);
            else break;
        }
        sort(s.begin(), s.end());
        cout << s.size() << endl;
        for(int i : s) cout << i << " ";
        cout << endl;
    }
    return 0;
}
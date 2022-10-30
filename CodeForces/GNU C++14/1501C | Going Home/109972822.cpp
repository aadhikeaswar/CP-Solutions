#include <iostream>
#include <vector>
using namespace std;
vector<pair<int,int>> sums[10000001];
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int &i : a) cin >> i;
    for (int i = 0; i < n; i++) for (int j = i + 1; j < n; j++) {
        if(sums[a[i] + a[j]].empty()) sums[a[i] + a[j]].emplace_back(make_pair(i, j));
        for(auto k : sums[a[i]+a[j]]){
            if (k.first != i && k.second != j && k.first != j && k.second != i) sums[a[i] + a[j]].emplace_back(make_pair(i, j));
            if(sums[a[i]+a[j]].size()==2){
                cout << "YES" << endl << sums[a[i]+a[j]][0].first+1 << " " << sums[a[i]+a[j]][0].second+1 << " " <<  sums[a[i]+a[j]][1].first +1<< " " << sums[a[i]+a[j]][1].second+1;
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
#include <iostream>
#include <set>
using namespace std;
typedef long long ll;
int main() {
    ll t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        multiset<pair<int,int>> al;
        int b[n][m], x;
        for(int i = 0; i < n; i++) for(int j = 0; j < m; j++){
            cin >> x;
            al.insert(make_pair(x,i));
            b[i][j] = -1;
        }
        for(int i = 0; i < m; i++){
            auto itr = al.begin();
            b[itr->second][i] = itr->first;
            al.erase(itr);
        }
        while(!al.empty()){
            auto itr = al.begin();
            int ln = 0;
            while(b[itr->second][ln]!=-1) ln++;
            b[itr->second][ln] = itr->first;
            al.erase(itr);
        }
        for(auto &i : b){
            for(int j : i) cout << j << " ";
            cout << endl;
        }
    }
    return 0;
}
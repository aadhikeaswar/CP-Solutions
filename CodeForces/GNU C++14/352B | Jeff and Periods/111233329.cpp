#include <iostream>
#include <vector>
using namespace std;
vector<int> f[100000];
int main() {
    int n,x;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> x;
        f[x].emplace_back(i);
    }
    vector<pair<int,int>> ans;
    for(int i = 0; i <= 100000; i++){
        if(f[i].size()==1) ans.emplace_back(make_pair(i,0));
        else if(f[i].size()==2) ans.emplace_back(make_pair(i, f[i][1]-f[i][0]));
        else if(f[i].size()>2){
            bool possible{true};
            for(int j = 1; j < f[i].size()-1; j++) if(f[i][j]-f[i][j-1] != f[i][j+1]-f[i][j]) possible = false;
            if(possible) ans.emplace_back(make_pair(i, f[i][1]-f[i][0]));
        }
    }
    cout << ans.size() << endl;
    for(auto i : ans) cout << i.first << " " << i.second << endl;
    return 0;
}
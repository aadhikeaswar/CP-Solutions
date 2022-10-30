#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
    map<int, vector<int>> f;
    int n,x;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> x;
        f[x].push_back(i);
    }
    vector<pair<int,int>> ans;
    for(auto i : f){
        if(i.second.size()==1) ans.emplace_back(make_pair(i.first,0));
        else if(i.second.size()==2) ans.emplace_back(make_pair(i.first, i.second[1]-i.second[0]));
        else {
            bool possible{true};
            for(int j = 1; j < i.second.size()-1; j++) if(i.second[j]-i.second[j-1] != i.second[j+1]-i.second[j]) possible = false;
            if(possible) ans.emplace_back(make_pair(i.first, i.second[1]-i.second[0]));
        }
    }
    cout << ans.size() << endl;
    for(auto i : ans) cout << i.first << " " << i.second << endl;
    return 0;
}
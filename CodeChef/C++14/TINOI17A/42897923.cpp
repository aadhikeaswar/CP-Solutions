#include <iostream>
#include <map>
#include <queue>
using namespace std;
int main() {
    map<pair<int,int>, bool> vis;
    map<pair<int,int>, bool> cul;
    int r, c, n, p, y, sol{0};
	cin >> r >> c >> n;
	pair<int,int> culL[n];
	for(int i = 0; i < n; i++){
		cin >> p >> y;
		culL[i] = make_pair(p,y), cul[culL[i]] = true;
	}
	queue<pair<int,int>> bfs;
	for(auto i : culL){
		if(vis[i]) continue;
		int fLen{0};
		vis[i] = true, bfs.push(i);
		while(!bfs.empty()) {
            pair<int, int> x = bfs.front();
            bfs.pop();
            x.first++;
            if(cul[x] && !vis[x]) bfs.push(x), vis[x] = true;
            else if(!cul[x]) fLen++;
            x.first -= 2;
            if(cul[x] && !vis[x]) bfs.push(x), vis[x] = true;
            else  if(!cul[x]) fLen++;
            x.first += 1, x.second++;
            if(cul[x] && !vis[x]) bfs.push(x), vis[x] = true;
            else if(!cul[x]) fLen++;
            x.second -= 2;
            if(cul[x] && !vis[x]) bfs.push(x), vis[x] = true;
            else if(!cul[x]) fLen++;
        }
		sol = max(sol, fLen);
	}
	 cout << sol;
    return 0;
}

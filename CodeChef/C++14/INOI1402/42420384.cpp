#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
vector<int> aList[231], rList[231];
bool vis[231];
int minP[231];
int cr(int i, int c){
    stack<int> dfs;
    dfs.push(i);
    minP[i] = 0;
    vis[i] = true;
    int rValue{0};
    while(!dfs.empty()){
        int x{dfs.top()};
        dfs.pop();
        for(int y = 0; y < aList[x].size(); y++){
            int city = aList[x][y], price = minP[x] + rList[x][y];
            if(!vis[city] || price < minP[city]) vis[city] = true, minP[city] = min( price, minP[city]), dfs.push(city);
        }
    }
    for(int j = 1; j<= c; j++) rValue = max(rValue, minP[j]);
    return rValue;
}

int main() {
    int c, f, a, b, p, sol{0};
    scanf("%d %d ", &c, &f);
    while(f--){
        scanf("%d %d %d", &a, &b, &p);
        aList[a].push_back(b);
        aList[b].push_back(a);
        rList[a].push_back(p);
        rList[b].push_back(p);
    }
    for(int i = 1; i <= c; i++){
            for(int k = 1; k<= c; k++) vis[k] = false, minP[k] = INT32_MAX;
            sol = max(sol, cr(i,c) );
    }
    cout << sol;
    return 0;
}

#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include<queue>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int  n, k,  u, v, m;
        cin >> n >> m >> k;
        int museums[n+1];
        vector<int> aList[n+1];
        bool vis[n+1];
        deque<int> choices;
        for(int i = 1; i <= n; i++) aList[i].clear();
        while(m--){
            cin >> u >> v;
            aList[v].push_back(u), aList[u].push_back(v);
        }
        for(int i = 1; i <= n; i++) cin >> museums[i];
        for(int i = 1; i <= n; i++) vis[i] = false;
        for(int i = 1; i <= n; i++){
            if(vis[i]) continue;
            int mVisited{0};
            queue<int> dfs;
            dfs.push(i);
            vis[i] = true;
            while(!dfs.empty()){
                int x{dfs.front()};
                dfs.pop();
                mVisited += museums[x];
                for(int j: aList[x])if(!vis[j]) dfs.push(j), vis[j] = true;
            }
            choices.push_back(mVisited);
        }
        int sol{0} ;
        bool printSol{true};
        sort(choices.rbegin(), choices.rend());
        for(int i = 0; i < k; i++){
            if(choices.empty()){
                printSol = false;
                cout << -1 << endl;
                break;
            }
            else{
                if(i%2==1)sol+=choices.back(), choices.pop_back();
                else sol+=choices.front(), choices.pop_front();
            }
        }
        if(printSol) cout << sol << endl;
    }
    return 0;
}

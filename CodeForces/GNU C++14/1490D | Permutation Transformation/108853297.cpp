#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int arr[101], d[101];
vector<int> aList[101];
void cT(int i, int j, int n){
    if(i==0 || i>j) return;
    int sol = 0, pos = -1;
    for(int k = i; k <= j; k++) if(sol<arr[k]) sol = arr[k], pos = k;
    aList[n].push_back(sol);
    cT(i, pos-1, sol);
    cT(pos+1, j, sol);
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i <= n; i++) aList[i].clear();
        for(int i = 1; i <= n; i++) cin >> arr[i];
        cT(1,n,0);
        stack<int> dfs;
        dfs.push(0);
        d[0] = -1;
        while(!dfs.empty()){
            int x = dfs.top();
            dfs.pop();
            for(int i : aList[x]) dfs.push(i), d[i] = d[x] + 1;
        }
        for(int i = 1; i <= n; i++) cout << d[arr[i]] << " ";
        cout << endl;
    }
    return 0;
}
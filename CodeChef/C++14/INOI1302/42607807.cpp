#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;
int read(){
    int n{0};
    char c;
    while((c=getchar_unlocked())<48);
    n += (c-'0');
    while ((c=getchar_unlocked())>=48) n = n*10 + (c-'0');
    return n;
}
int main() {
    int n = read(), k = read(), sol{0};
    vector<int> sequences[n];
    vector<int> relatives[n];
    int vis[n];
    for(int i = 0; i < n; i++) vis[i] = false;
    for(int i = 0; i < n; i++){
        int s = read();
        vector<int> inp(s);
        for(int j = 0; j < s; j++) inp[j] = read();
        sort(inp.begin(), inp.end());
        sequences[i] = inp;
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j<n; j++){
            int temp{0};
            int p{0}, l{0};
            while(p < sequences[i].size() && l < sequences[j].size()){
                if(sequences[i][p] < sequences[j][l]) p++;
                else if (sequences[i][p]==sequences[j][l]) temp++, p++, l++;
                else l++;
            }
            if(temp>=k) relatives[i].push_back(j), relatives[j].push_back(i);
        }
    }
    stack<int> s;
    s.push(0);
    vis[0] = true;
    while (!s.empty()){
        int x = s.top();
        s.pop();
        sol++;
        for(int l: relatives[x]) if(!vis[l]) s.push(l), vis[l] = true;
    }
    cout << sol;
    return 0;
}

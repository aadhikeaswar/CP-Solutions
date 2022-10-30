#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, k;
        long long sol{0};
        cin >> a >> b >> k;
        vector<int> gList[a+1], bList[b+1];
        pair<int,int> couples[k];
        for(auto &i : couples) cin >> i .first;
        for(auto &i : couples) cin >> i.second;
        for(auto &i : couples){
            gList[i.first].push_back(i.second);
            bList[i.second].push_back(i.first);
        }
        for(auto &i : couples) sol += k - gList[i.first].size() - bList[i.second].size() + 1;
        cout << sol/2 << endl;
    }
    return 0;
}
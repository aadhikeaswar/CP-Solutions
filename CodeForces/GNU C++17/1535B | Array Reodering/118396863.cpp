#include <iostream>
#include <queue>
using namespace std;
int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main() {
    int t, n, temp{0};
    cin >> t;
    while(t--){
        int sol{0};
        cin >> n;
        deque<int> a;
        vector<int> b;
        while(n--){
            cin >> temp;
            if(temp%2==1) a.push_back(temp);
            else a.push_front(temp);
        }
        while(!a.empty()) b.push_back(a.front()), a.pop_front();
        for(int i = 0; i < b.size(); i++) for(int j = i+1; j < b.size(); j++) if(gcd(b[i], 2*b[j]) > 1) sol++;
        cout << sol << endl;
    }
    return 0;
}
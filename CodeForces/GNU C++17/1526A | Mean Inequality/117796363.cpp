#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
typedef long long ll;
int main() {
    ll t, n, temp{0};
    cin >> t;
    while(t--){
        cin >> n;
        deque<ll> a;
        for(int i = 0; i < 2*n; i++){
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());
        while(!a.empty()){
            if(a.size()%2==0) {
                cout << a.front() << " ";
                a.pop_front();
            }
            else {
                cout << a.back() << " ";
                a.pop_back();
            }
        }
        cout << endl;
    }
    return 0;
}
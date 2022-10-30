#include <iostream>
#include <stack>
#include <queue>
 
using namespace std;
int main() {
    int t, x;
    cin >> t;
    while(t--){
        cin >> x;
        int p{x};
        queue<int> bit, bit2;
        while(x > 0) bit.push(x%2), x /= 2;
        bit.push(0);
        int i{0}, sol{0}, j{0};
        while(!bit.empty() && sol == 0) sol += (bit.front() == 1? 1 << i : 0), i++, bit2.push(bit.front()), bit.pop();
        while(!bit.empty()) bit2.push(bit.front()), bit.pop();
        int temp{sol};
        if((p^sol) <= 0) {
            while(!bit2.empty() && sol == temp) sol += (bit2.front() == 0? 1 << j : 0),  bit2.pop(), j++;
        }
        cout << sol << endl;
    }
    return 0;
}
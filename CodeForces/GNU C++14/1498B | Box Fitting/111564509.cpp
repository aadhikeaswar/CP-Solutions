#include <iostream>
#include <set>
typedef long long ll;
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        ll l, w, sl, sol{1};
        multiset<int> st;
        cin >> n >> w;
        while (n--) {
            cin >> l;
            st.insert(l);
        }
        sl = w;
        while(!st.empty()){
            auto it = st.upper_bound(sl);
            if(it != st.begin()) it--, sl-= *it, st.erase(it);
            else sl = w, sol++;
        }
        cout << sol << endl;
    }
    return 0;
}
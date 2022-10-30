#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> s;
    int x,n{4};
    while (n--){
        cin >> x;
        s.insert(x);
    }
    cout << 4-s.size();
    return 0;
}
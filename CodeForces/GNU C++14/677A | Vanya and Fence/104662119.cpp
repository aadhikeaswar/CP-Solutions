#include <iostream>
using namespace std;
int main() {
    int sol, n, h;
    cin >> n >> h;
    sol = n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x>h) sol++;
    }
    cout << sol;
    return 0;
}
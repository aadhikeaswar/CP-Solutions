#include <iostream>
using namespace std;
int main() {
    long long x;
    int n,d, sol{0};
    char c;
    cin >> n >> x;
    while (n--){
        cin >> c >> d;
        if(c=='-') {
            if(d<=x) x -= d;
            else sol++;
        }
        else x += d;
    }
    cout << x << " " << sol;
}
#include <iostream>
using namespace std;
int main() {
    int n, x, b, d, waste{0}, sol{0};
    cin >> n >> b >> d;
    while(n--){
        cin >> x;
        if(x<=b) waste += x;
        if(waste>d) waste = 0, sol++;
    }
    cout << sol;
}
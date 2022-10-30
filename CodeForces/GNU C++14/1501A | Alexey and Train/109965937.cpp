#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ad[n+1][2], d[n+1], time{0};
        d[0] = ad[0][0] = ad[0][1] = 0;
        for(int i = 1; i <= n; i++) cin >> ad[i][0] >> ad[i][1];
        for(int i = 1; i <= n; i++) cin >> d[i];
        for(int i = 1; i <= n; i++) {
            time += ad[i][0]-ad[i-1][1] + d[i];
            if(i==n) break;
            time += (int) ceil((float)(ad[i][1] - ad[i][0])/2);
            if(time < ad[i][1]) time = ad[i][1];
        }
        cout << time << endl;
    }
    return 0;
}
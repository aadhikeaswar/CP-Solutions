#include <iostream>
using namespace std;
int main() {
    int a, b, k, t;
    cin >> t;
    while(t--){
        cin >> a >> b >> k;
        if(k == 1) {
            if((a%b == 0 || b%a == 0) && a != b) cout << "YES" << endl;
            else cout << "NO" << endl;
            continue;
        }
        int pa{0}, pb{0};
        for(int i = 2; i * i <= max(a,b); i++) {
            while (a % i == 0) a /= i, pa++;
            while (b % i == 0) b /= i, pb++;
        }
        if(a > 1) pa++;
        if(b > 1) pb++;
        if(pa + pb >= k) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
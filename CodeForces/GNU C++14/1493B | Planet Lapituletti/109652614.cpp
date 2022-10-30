#include <iostream>
#include <sstream>
using namespace std;
int refl(int n){
    int mir[10] = {0,1,5,-1,-1,2,-1,-1,8,-1}, rValue{0}, n1{n};
    while(n>0) {
        if(mir[n%10]>=0) rValue += mir[n%10];
        else return 100;
        n/= 10;
        if(n!=0) rValue*= 10;
    }
    if(n1 < 10 && rValue<10) rValue*= 10;
    return rValue;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int h , m, x, y, y1, x1;
        cin >> h >> m;
        stringstream s;
        string s1;
        char c = 0;
        cin >> s1;
        s << s1;
        s >> x >> c >> y;
        for(int i = 0; i < h; i++) {
            if(refl((x+i)%h) < m) {
                x1 = (x+i)%h;
                break;
            }
        }
        for(int i = 0; i < m; i++) {
            if(refl((y+i)%m) < h) {
                y1 = (y+i)%m;
                break;
            }
        }
        if(x==x1 && y > y1) {
            for(int i = 0; i < h; i++) {
                if(refl((x+1+i)%h) < m) {
                    x1 = (x+1+i)%h;
                    break;
                }
            }
        }
        if(x1!=x && y1>=y){
            for(int i = 0; i < m; i++) {
                if(refl(i%m) < h) {
                    y1 = i%m;
                    break;
                }
            }
        }
        if(x1<10) cout << 0 << x1 << ":";
        else cout << x1 << ":";
        if(y1<10) cout << 0 << y1 << endl;
        else cout << y1 << endl;
    }
    return 0;
}
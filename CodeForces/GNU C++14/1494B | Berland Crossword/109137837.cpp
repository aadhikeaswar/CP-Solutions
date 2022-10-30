#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, u, r, d, l;
        cin >> n >> u >> r >> d >> l;
        int vu{u}, vr{r}, vd{d}, vl{l};
        if(u==n) vl--, vr--;
        if(d==n) vr--, vl--;
        if(u==n-1 ){
            if(vl <= vr) vr--;
            else vl--;
        }
        if(d==n-1 ){
            if(vl <= vr) vr--;
            else vl--;
        }
        if(r==n) vu--, vd--;
        if(l==n) vu--, vd--;
        if(r==n-1){
            if(vu <= vd) vd--;
            else vu--;
        }
        if(l==n-1){
            if (vu <= vd) vd--;
            else vu--;
        }
        if(vu<0 || vd<0 || vr<0 || vl<0) cout << "nO" << endl;
        else cout << "yEs" << endl;
    }
    return 0;
}
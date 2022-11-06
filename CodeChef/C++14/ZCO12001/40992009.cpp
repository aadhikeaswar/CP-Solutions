#include <iostream>
using namespace std;
inline int read(){
    int n{0}; char c;
    while((c=getchar_unlocked())<48);
    n += (c-'0');
    while((c=getchar_unlocked())>=48) n = n*10 + (c-'0');
    return n;
}
int main() {
    int n = read();
    int cnd{0}, bnd{0}, bni{0}, cns{0}, bns{0}, csi{0}, bsi{0};
    for(int i = 1; i <= n ;i++) {
        int inp = read();
        if (inp == 1) cnd++;
        if (cnd >= 1) cns++;
        if (cns == 1) csi = i;
        if (cns > bns) {
            bns = cns;
            bsi = csi;
        }
        if(inp == 2) cnd--;
        if (cnd == 0) cns = 0;
        if (cnd > bnd) {
            bnd = cnd;
            bni = i;
        }
    }
    printf("%d %d %d %d", bnd, bni, bns, bsi);
    return 0;
}

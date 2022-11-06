#include <iostream>
using namespace std;
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int boxes[n];
    for(int i = 0; i<n; i++) scanf("%d",&boxes[i]);
    int inp = 1, pos = 0;
    bool hasBox = false;
    while (inp!=0){
        scanf("%d", &inp);
        if(inp==1) {if(pos!=0) pos--;}
        else if(inp==2) {if(pos!=n-1) pos++;}
        else if(inp==3) {
            if(!hasBox && boxes[pos]!=0){
                boxes[pos]--;
                hasBox = true;
            }
        }
        else if(inp==4){
            if(hasBox && boxes[pos]!=m){
                boxes[pos]++;
                hasBox = false;
            }
        }
        else break;
    }
    for (int i = 0; i < n; ++i) printf("%d ", boxes[i]);
    return 0;
}

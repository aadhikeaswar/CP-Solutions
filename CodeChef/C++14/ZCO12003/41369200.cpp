#include <iostream>
#include <stack>
using namespace std;
int main() {
    int ad{0}, bad{0}, cs{0}, cd{0}, bcs{0}, ss{0}, sd{0}, bss{0};
    int n;
    cin >> n;
    stack<int> brackets;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        if(t==1 || t==3){
            if(ad == 0) ad++;
            if(!brackets.empty() && brackets.top() != t) ad++;
            brackets.push(t);
            if(ad>bad) bad = ad;
        }
        else{
            int temp = brackets.top();
            brackets.pop();
            if(!brackets.empty() && temp!=brackets.top()) ad--;
        }
        if(t==1) cd++;
        if(cd>=1) cs++;
        if(t-1==1) cd--;
        if(cs>bcs) bcs = cs;
        if(cd==0) cs = 0;
        if(t==3) sd++;
        if(sd>=1) ss++;
        if(t-1==3) sd--;
        if(ss>bss) bss = ss;
        if(sd==0) ss = 0;
    }
    printf("%d %d %d", bad, bcs, bss);
    return 0;
}

#include <iostream>
#include <set>
using namespace std;
inline int read(){
    int n{0}; char c;
    while((c=getchar_unlocked())<48);
    n += (c-'0');
    while((c=getchar_unlocked())>=48) n = n*10 + (c-'0');
    return n;
}
struct contest{
    int start, end;
};
int main() {
    int n = read(), x = read(), y = read();
    int solution = INT32_MAX;
    contest contests[n];
    for(int i = 0; i < n; i++){
        int s = read(), e = read();
        contests[i].start = s;
        contests[i].end = e;
    }
    set<int> v;
    set<int> w;
    for(int i = 0 ; i < x; i++){
       int inp = read();
       v.insert(inp);
    }
    for(int i = 0; i < y; i++){
        int inp = read();
        w.insert(inp);
    }
    for(int i = 0; i < n; i++){
        if(contests[i].end <= *w.rbegin()){
            int wHole = *w.lower_bound(contests[i].end);
            set<int>::iterator it = v.lower_bound(contests[i].start);
            if(*it==contests[i].start) solution = min(solution, wHole-*it);
            while(it!=v.begin()){
                it--;
                if(*it<=contests[i].start) break;
            }
            if(*it<=contests[i].start) {
                int vHole = *it;
                solution = min(solution, wHole - vHole);
            }
        }
    }
    printf("%d", solution+1);
    return 0;
}
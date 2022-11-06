#include <iostream>
#include <algorithm>
using namespace std;
int v[200000] = {0};
int v1[200000] = {0};
int n;
int leastWork(int i){
    if(i>=n) return 0;
    else if(v1[i]!=0) return v1[i];
    else {
        v1[i] = v[i] + min({leastWork(i + 1), leastWork(i + 2), leastWork(i + 3)});
        return v1[i];
    }
}
int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &v[i]);
    printf("%d", min({leastWork(0),leastWork(1),leastWork(2)}));
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;
int n, a[100001], sol{INT32_MIN}, x, start;
vector<int> employees[100001];
int wd(int i){
    int rValue{INT32_MAX};
    for(int j : employees[i]) rValue = min(rValue, min(a[j], wd(j)));
    if(!employees[i].empty()) sol = max(sol, a[i]-rValue);
    return rValue;
}
int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for(int i = 1; i <= n; i++){
        scanf("%d", &x);
        if(x==-1) start = i;
        else employees[x].push_back(i);
    }
    wd(start);
    printf("%d", sol);
    return 0;
}

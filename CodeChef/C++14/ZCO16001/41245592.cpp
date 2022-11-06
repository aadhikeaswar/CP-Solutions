#include <iostream>
#include <algorithm>
using namespace std;
 inline int read(){
     int n{0}; char c;
     while ((c=getchar_unlocked())<48);
     n += (c-'0');
     while((c=getchar_unlocked())>=48) n = n * 10 + (c-'0');
     return n;
 }
int main() {
    int n = read(), k = read();
    int a[n], b[n];
    for(int i = 0; i < 2*n; i++){
        if(i<n) a[i] = read();
        else b[i-n] = read();
    }
    sort(a,a+n);
    sort(b,b+n);
    int c[n], d[n];
    for(int i = 0; i < n ;i++) c[i] = a[i], d[i] = b[i];
    int i = n-1, k2 = k;
    while(k!=0 && a[i]>b[n-1-i] && i>=0){
        int s = a[i];
        a[i] = b[n-1-i];
        b[n-1-i] = s;
        i--;
        k--;
    }
    int maxA = 0, maxB = 0;
    for(i = 0; i < n; i++){
        if(maxA<a[i]) maxA = a[i];
        if(maxB<b[i]) maxB = b[i];
    }
    i = n-1;
    while(k2!=0 && d[i]>c[n-1-i] && i>=0){
        int s = d[i];
        d[i] = c[n-1-i];
        c[n-1-i] = s;
        i--;
        k2--;
    }
    int maxD = 0, maxC = 0;
    for(i = 0; i < n; i++){
        if(maxD<d[i]) maxD = d[i];
        if(maxC<c[i]) maxC = c[i];
    }
    int ans = min(maxA+maxB, maxC+maxD);
    printf("%d", ans);
    return 0;
}

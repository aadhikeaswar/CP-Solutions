#include <iostream>
#include <vector>
using namespace std;
vector<int> a, seg;
void build(int l, int r, int pos, int n){
    if(l==r) seg[pos] = a[l];
    else{
        int mid = (l + r)/2;
        build(l, mid, pos*2, n-1);
        build(mid + 1, r, pos*2 + 1, n-1);
        seg[pos] = (n%2 == 1) ? seg[pos*2] | seg[pos*2 + 1] : seg[pos*2] ^ seg[pos*2 + 1];
    }
}
void update(int l, int r, int qpos, int qval, int pos, int n){
    if(l == r) seg[pos] = qval;
    else{
        int mid = (l + r)/2;
        if(qpos <= mid) update(l, mid, qpos, qval, pos*2, n-1);
        else update(mid + 1, r, qpos, qval, pos*2 + 1, n-1);
        seg[pos] = (n%2 == 1) ? seg[pos*2] | seg[pos*2 + 1] : seg[pos*2] ^ seg[pos*2 + 1];
    }
}
int main() {
    int n, m, e, p, b;
    cin >> n >> m;
    e = 1 << n;
    a.resize(e + 1), seg.resize(4*e + 1);
    for(int i = 1; i <= e; i++) cin >> a[i];
    build(1, e, 1, n);
    while(m--){
        cin >> p >> b;
        update(1, e, p, b, 1, n);
        cout << seg[1] << endl;
    }
    return 0;
}
 #include<iostream>
 using namespace std;
 bool vis[700][700];
 int dp[700][700], b[700], v[700], n, p;
 int maxSub(int i, int j ){
             if(j>=n || j <= i) return 0;
             if(vis[i][j]) return dp[i][j];
             vis[i][j] = true, dp[i][j] = 0;
             int sol{0};
             if(b[i] + p == b[j]) sol = v[i]+ v[j];
             for(int l = i; l < j; l++) dp[i][j] = max(maxSub(i,l)+maxSub(l+1,j),max(dp[i][j],maxSub(i+1,l)+maxSub(l+1,j-1)+sol));
             dp[i][j] = max(sol, dp[i][j]);
             int x = dp[i][j];
             return dp[i][j];
     }
 int main(){
             for(auto &i: vis)for(bool &j: i) j = false;
             cin >> n >> p;
             for(int i = 0; i < n; i++) cin >> v[i];
             for(int i = 0; i < n; i++) cin >> b[i];
             cout << maxSub(0, n-1);
}





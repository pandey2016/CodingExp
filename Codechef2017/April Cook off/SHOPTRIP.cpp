#include<bits/stdc++.h>
using namespace std;
 
string str[50];
double x[50];
double y[50];
int n,k;
double D[50][50];
double dp[1<<12][38];
int vis[1<<12][38];
int tc;
int bit[55];
double dist(int i,int j) {
  double val = (x[i]-x[j]) * (x[i] - x[j]);
  val += (y[i]-y[j]) * (y[i]-y[j]);
  return sqrt(val);
}
double solve(int mask,int last) {
  if(mask == (1<<k) -1){
    return D[last][0];
  }
  if(vis[mask][last] == tc) return dp[mask][last];
  vis[mask][last] = tc;
  double ans = 1e19;
  for(int i = 1 ; i <= n ; i++) {
    if( (mask|bit[i]) > mask) {
      ans = min(ans,D[i][last] + solve(mask|bit[i],i));
    }
  }
  return dp[mask][last] = ans;
}
int main() {
  int t;
  cin >> t;
  while(t--) {
    memset(bit,0,sizeof(bit));
    ++tc;
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i++) {
      cin >> x[i] >> y[i];
    }
    for(int i = 1 ; i <= n ; i++) {
      cin >> str[i];
      for(int j = 0 ; j < str[i].size() ; j++) {
	if(str[i][j] == '1') {
	  bit[i] |= (1<<j);
	}
      }
    }
    for(int i = 0 ; i<= n ; i++) {
      for(int j = 0 ; j<= n ; j++) {
	D[i][j] = dist(i,j);
      }
    }
    double ans = solve(0,0);
    if(ans >= 1e18) {
      cout << -1 << endl;
      continue;
    }
    printf("%.17lf\n",ans);
  }
} 

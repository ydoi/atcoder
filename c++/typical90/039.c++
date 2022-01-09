//https://atcoder.jp/contests/typical90/tasks/typical90_am
#include<bits/stdc++.h>
using namespace std;

long long N;
long long A[1 << 18], B[1 << 18];
long long dp[1 << 18];
vector<int> G[1 << 18];

void dfs(int pos, int pre) {
  dp[pos] = 1;
  for (int i : G[pos]) {
    if (i == pre) continue;
    //dp[pos] += dp[i];
    dfs(i, pos);
    dp[pos] += dp[i];
  }
}

int main() {
  cin >> N;
  for (int i = 1; i <= N - 1; ++i) {
    cin >> A[i] >> B[i];
    G[A[i]].push_back(B[i]);
    G[B[i]].push_back(A[i]);
  }
  
  dfs(1, -1);
  
  long long ans = 0;
  for (int i = 1; i <= N - 1; ++i) {
    long long r = min(dp[A[i]], dp[B[i]]);
    ans += r * (N - r);
  }
  cout << ans << endl;
}
  

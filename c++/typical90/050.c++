// https://atcoder.jp/contests/typical90/tasks/typical90_ax
#include<bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int N, L; cin >> N >> L;

  long long dp[N + 1];
  dp[0] = 1;
  for (int i = 1; i <= N; ++i) {
    if (i < L) { 
      dp[i] = dp[i - 1] % 1000000007;
    } else {
      dp[i] = (dp[i - 1] + dp[i - L]) % 1000000007;
    } 
  }
  
  cout << dp[N] << endl;
}
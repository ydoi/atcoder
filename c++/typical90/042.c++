// https://atcoder.jp/contests/typical90/tasks/typical90_ap
#include<bits/stdc++.h>
using namespace std;

int main() {
  int K; cin >> K;
  vector<int> dp(K + 1);
  int ans = 0;
  int mod = 1000000007;

  dp[0] = 1;
  if (K % 9 == 0) {
    for (int i = 1; i <= K; i++) {
      // 先頭の桁が1〜9の総和の各パターンのDP
      for (int j = 1; j <= 9 && i - j >= 0; j++) {
        dp[i] += dp[i - j];
        if (dp[i] >= mod) dp[i] -= mod;
      }
    }
    ans = dp[K];
  }
          
  cout << ans << endl;
}

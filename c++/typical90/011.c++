//https://atcoder.jp/contests/typical90/tasks/typical90_k
#include<bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  long long D[5009];
  long long C[5009];
  long long S[5009];
  
  for (int i = 1; i <= N; ++i) {
    cin >> D[i] >> C[i] >> S[i];
  }
  
  vector<tuple<long long, long long, long long>> tup;
  
  for (int i = 1; i <= N; ++i) {
    tup.push_back(make_tuple(D[i], C[i], S[i]));
  }
                  
  sort(tup.begin(), tup.end());
  for (int i = 1; i <= N; ++i) {
    D[i] = get<0>(tup[i - 1]);
    C[i] = get<1>(tup[i - 1]);
    S[i] = get<2>(tup[i - 1]);
  }
  
  long long dp[5009][5009];
  for (int i = 1; i <= N; ++i) {
    for (int j = 0; j <= 5000; ++j) {
      if (i - 1 < 0) {
        dp[i][j] = 0;
        continue;
      }
      if (j < C[i] && D[i] < j) {
        dp[i][j] = dp[i - 1][j];
      } else if (C[i] <= j && j <= D[i]) {
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - C[i]] + S[i]);
      } else {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
                  
  long long ans = 0;
  for (int j = 0; j <= 5000; ++j) {
    ans = max(ans, dp[N][j]);
  }
                  
  cout << ans << endl;
}

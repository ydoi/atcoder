// https://atcoder.jp/contests/abc067/tasks/abc067_b
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> bars(N);
  for (int i = 0; i < N; i++) cin >> bars.at(i);
  sort(bars.begin(), bars.end());
  reverse(bars.begin(), bars.end());
  
  int ans = 0;
  for (int i = 0; i < K; i++) {
    ans += bars.at(i);
  }
  
  cout << ans << endl;
}
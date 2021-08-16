// https://atcoder.jp/contests/typical90/tasks/typical90_ah
#include<bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int N, K; cin >> N >> K;
  int a[100009];
  map<int, int> Map;
  for (int i = 1; i <= N; ++i) cin >> a[i];

  int r = 1;
  int count = 0;
  int ans = 0;
  for (int i = 1; i <= N; ++i) {
    // 尺取り法
    while(r <= N) {
      // K種類到達
      if (Map[a[r]] == 0 && count == K) break;
      if (Map[a[r]] == 0) count++;
      Map[a[r]]++;
      r++;
    }
    ans = max(ans, r - i);
    if (Map[a[i]] == 1) count--;
    Map[a[i]]--;
  }

  cout << ans << endl;
}

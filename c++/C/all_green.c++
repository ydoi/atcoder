// https://atcoder.jp/contests/abc104/tasks/abc104_c
#include<bits/stdc++.h>
using namespace std;
int main() {
  // 入力
  int D, G; cin >> D >> G;
  vector<int> p(D), c(D);
  for (int i = 0; i < D; ++i) cin >> p.at(i) >> c.at(i);

  int ans = INT_MAX;
  
  // コンプリートボーナスかどうかのパターン  2^D
  for (int bit = 0; bit < (1 << D); ++bit) {
    long long sum = 0;
    int num = 0;
    for (int i = 0; i < D; ++i) {
      // 基本スコア + コンプリートボーナス
      if (bit & (1 << i)) {
        sum += 100 * (i + 1) * p.at(i) + c.at(i);
        num += p.at(i);
      }
    }
    
    // コンプリートボーナスだけで目標到達
    if (sum >= G) {
      ans = min(ans, num);
    } else {
      // 基本スコアのみ。点が高い後ろの問題から
      for (int i = D - 1; i >= 0; --i) {
        if (bit & (1 << i)) continue;
        for (int j = 0; j < p.at(i); ++j) {
          if (sum >= G) break;
          sum += 100 * (i + 1);
          ++num;
        }
      }
      ans = min(ans, num);
    }
  }
  cout << ans << endl;
}
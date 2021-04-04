// https://atcoder.jp/contests/abc177/tasks/abc177_b
#include<bits/stdc++.h>
using namespace std;

int main() {
  string S, T; cin >> S >> T;
  int ans = 2147483647;
  for (int i = 0; i < S.size() - T.size() + 1; ++i) {
    int diff = 0;
    for (int j = 0; j < T.size(); ++j) {
      if (S.at(i + j) != T.at(j)) diff++;
    }
    ans = min(ans, diff);
  }
  cout << ans << endl;
}
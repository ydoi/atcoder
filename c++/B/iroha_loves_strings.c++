// https://atcoder.jp/contests/abc042/tasks/abc042_b
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L;
  cin >> N >> L;
  vector<string> data(N);
  for (int i = 0; i < N; i++) cin >> data.at(i);
  sort(data.begin(), data.end());
  string ans;
  for (int i = 0; i < N; i++) {
    ans += data.at(i);
  }
  cout << ans << endl;
}
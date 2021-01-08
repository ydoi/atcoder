// https://atcoder.jp/contests/agc012/tasks/agc012_a
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> data(3 * N);
  for (int i = 0; i < 3 * N; i++) cin >> data.at(i);
  sort(data.begin(), data.end());
  reverse(data.begin(), data.end());

  long long ans = 0;
  for (int i = 1; i < 2 * N; i += 2) {
    ans += data.at(i);
  }

  cout << ans << endl;
}
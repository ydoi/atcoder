// https://atcoder.jp/contests/keyence2021/tasks/keyence2021_a
#include<bits/stdc++.h>
using namespace std;
#define int int_fast64_t

int32_t main() {
  int N;
  cin >> N;
  vector<int> a(N);
  vector<int> A(N);

  cin >> a.at(0);
  A.at(0) = a.at(0);
  for (int i = 1; i < N; i++) {
    cin >> a.at(i);
    A.at(i) = a.at(i);
    if (i > 0) a.at(i) = max(a.at(i), a.at(i - 1));
  }
  vector<int> b(N);
  vector<int> B(N);
  cin >> b.at(0);
  B.at(0) = b.at(0);
  for (int i = 1; i < N; i++) {
    cin >> b.at(i);
    B.at(i) = b.at(i);
    if (i > 0) b.at(i) = max(b.at(i), b.at(i - 1));
  }
  int ans = 0;
  for (int c_len = 0; c_len < N; c_len++) {
    ans = max(ans, a.at(c_len) * B.at(c_len));
    cout << ans << endl;
  }
}
// https://atcoder.jp/contests/abc189/tasks/abc189_c
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> data(N);
  for (int i = 0; i < N; i++) cin >> data.at(i);
  
  int ans = 0;
  for (int l = 0; l < N; l++) {
    int x = data.at(l);
    for (int r = l; r < N; r++) {
      x = min(x, data.at(r));
      ans = max(ans, x * (r - l + 1));
    }
  }
  
  cout <<  ans << endl;
}
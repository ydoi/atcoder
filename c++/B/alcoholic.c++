// https://atcoder.jp/contests/abc189/tasks/abc189_b
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  vector<pair<int, int>> data(N);
  for (int i = 0; i < N; i++) {
    int V, P;
    cin >> V >> P;
    data.at(i) = make_pair(V, P);
  }
  
  int sum = 0;
  int ans = - 1;
  for (int i = 0; i < N; i++) {
    sum += data.at(i).first * data.at(i).second;
    if (100 * X < sum) {
      ans = i + 1;
      break;
    }
  }
  
  cout << ans << endl;
}
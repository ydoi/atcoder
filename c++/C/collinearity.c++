// https://atcoder.jp/contests/abc181/tasks/abc181_c
#include<bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<pair<int, int>> data(N);
  for (int i = 0; i < N; i++) {
    int x, y; cin >> x >> y;
    data.at(i) = make_pair(x, y);
  }
  
  bool collinearity = false;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      for (int k = j + 1; k < N; k++) {
        if (!collinearity) {
          collinearity = 
            (data.at(j).second - data.at(i).second) *
            (data.at(k).first - data.at(j).first) ==
            (data.at(k).second - data.at(j).second) *
            (data.at(j).first - data.at(i).first);
        }
      }
    }
  }
  string ans = collinearity ? "Yes" : "No";
  cout << ans << endl;
}
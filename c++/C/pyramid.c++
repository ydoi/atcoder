// https://atcoder.jp/contests/abc112/tasks/abc112_c
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<tuple<int, int, int>> data(N);
  for (int i = 0; i < N; i++) {
    int x, y, h;
    cin >> x >> y >> h;
    data.at(i) = make_tuple(x, y, h);
  }
  
  int ans_x = 0;
  int ans_y = 0;
  int ans_h = 0;
  int H;
  bool ans;
  for (int i = 0; i <= 100; i++) {
    for (int j = 0; j <= 100; j++) {
      for (int k = 0; k < N; k++) {
        int x, y, h;
        tie(x, y, h) = data.at(k);
        if (h) H = abs(x - i) + abs(y - j) + h;
      }
      for (int k = 0; k < N; k++) {
        int x, y, h;
        tie(x, y, h) = data.at(k);
        if (h == max(H - abs(x - i) - abs(y - j), 0)) {
          ans = true;
        } else {
          ans = false;
          k = N;
        }
      }
      if (ans) {
        cout << i << " " << j << " " << H << endl;
        return 0;
      }
    }
  }
}
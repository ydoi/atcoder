// https://atcoder.jp/contests/arc004/tasks/arc004_1
#include<bits/stdc++.h>
using namespace std;
int main() {
  int N; cin >> N;
  double ans = 0;
  vector<pair<int, int>> data(N);
  for (int i = 0; i < N; ++i) {
    int x, y; cin >> x >> y;
    data.at(i) = make_pair(x, y);
  }
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      double length_not_sqrt =
        pow((double)abs(data.at(i).first - data.at(j).first), 2) +
        pow((double)abs(data.at(i).second - data.at(j).second), 2);
      if (length_not_sqrt > ans) ans = length_not_sqrt;
    }
  }
  
  cout << sqrt(ans) << endl;
}
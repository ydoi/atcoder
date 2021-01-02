// https://atcoder.jp/contests/abc187/tasks/abc187_b
#include<bits/stdc++.h>
using namespace std;

double check_tilt(pair<double, double> one, pair<double, double> two) {
  double tilt = (two.second - one.second) / (two.first - one.first);
  bool result = tilt >= -1 && tilt <= 1;
  return result;
}

int main() {
  int N;
  cin >> N;
  vector<pair<double, double>> data(N);
  for (int i = 0; i < N; i++) {
    double x, y;
    cin >> x >> y;
    data.at(i) = make_pair(x, y);
  }
  
  int sum = 0;
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      if (check_tilt(data.at(i), data.at(j))) sum++;
    }
  }
  cout << sum << endl;
}
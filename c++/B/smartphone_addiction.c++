// https://atcoder.jp/contests/abc185/tasks/abc185_b
#include <bits/stdc++.h>
using namespace std;

int charge(int max, int current, int m) {
  int result;
  result = current + m;
  return result >= max ? max : result;
}

int main() {
  int N, M, T;
  cin >> N >> M >> T;
  string result = "Yes";
  int remaining  = N;
  int time = 0;
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    if (remaining - (a - time) > 0) {
      int walk_con = remaining - (a - time);
      int rest_con = b - a;
      remaining = charge(N, walk_con, rest_con);
      time = b;
    } else {
      result = "No";
      break;
    }
  }
  // cout << remaining << "- (" << T << "-" << time << ")" << endl; 
  if (remaining - (T - time) <= 0) result = "No";
  cout << result << endl;
}
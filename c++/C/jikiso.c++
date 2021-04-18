// https://atcoder.jp/contests/abc002/tasks/abc002_3
#include<bits/stdc++.h>
using namespace std;

int main(){
  double x_a, y_a, x_b, y_b, x_c, y_c;
  cin >> x_a >> y_a >> x_b >> y_b >> x_c >> y_c;
  double ans = abs((x_a - x_c) * (y_b - y_c) - (x_b - x_c) * (y_a - y_c)) / 2;
  cout << fixed << setprecision(3) << ans << endl;
}
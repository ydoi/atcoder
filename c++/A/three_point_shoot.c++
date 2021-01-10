// https://atcoder.jp/contests/abc188/tasks/abc188_a
#include<bits/stdc++.h>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;
  string ans = "No";
  if (abs(X - Y) < 3)  ans = "Yes";
  cout << ans << endl;
}
// https://atcoder.jp/contests/abc064/tasks/abc064_a
#include <bits/stdc++.h>
using namespace std;

int main(){
  int r, g, b;
  cin >> r >> g >> b;
  bool can = (r * 100 + g * 10 + b) % 4 == 0;
  if (can) cout << "YES" << endl;
  else cout << "NO" << endl;
}
// https://atcoder.jp/contests/abc065/tasks/abc065_a
#include<bits/stdc++.h>
using namespace std;
int main() {
  int X, A, B; cin >> X >> A >> B;
  string ans = "dangerous";
  if (A - B >= 0) {
    ans = "delicious";
  } else if (abs(A - B) < X + 1) {
    ans = "safe";
  }
  
  cout << ans << endl;
}
// https://atcoder.jp/contests/abc072/tasks/abc072_b
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string ans;
  for (int i = 1; i <= s.size(); i++) {
    if (i % 2 != 0) ans.push_back(s.at(i - 1));
  }
  cout << ans << endl;
}
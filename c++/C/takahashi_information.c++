// https://atcoder.jp/contests/abc088/tasks/abc088_c
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> c(3, vector<int>(3));
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> c.at(i).at(j);
    }
  }
  
  string ans = "No";
  for (int a1 = 0; a1 <= 100; a1++) {
    for (int a2 = 0; a2 <= 100; a2++) {
      for (int a3 = 0; a3 <= 100; a3++) {
        if (
            // 1列目
            c.at(0).at(0) - a1 == c.at(1).at(0) - a2 &&
            c.at(0).at(0) - a1 == c.at(2).at(0) - a3 &&
            c.at(1).at(0) - a2 == c.at(2).at(0) - a3 &&
            // 2列目
            c.at(0).at(1) - a1 == c.at(1).at(1) - a2 &&
            c.at(0).at(1) - a1 == c.at(2).at(1) - a3 &&
            c.at(1).at(1) - a2 == c.at(2).at(1) - a3 &&
            // 3列目
            c.at(0).at(2) - a1 == c.at(1).at(2) - a2 &&
            c.at(0).at(2) - a1 == c.at(2).at(2) - a3 &&
            c.at(1).at(2) - a2 == c.at(2).at(2) - a3
           ) {
          ans = "Yes";
          goto OUT;
        }
      }
    }
  }
  
OUT:
  cout << ans << endl;
}
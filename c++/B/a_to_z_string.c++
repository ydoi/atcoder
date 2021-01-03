// https://atcoder.jp/contests/abc053/tasks/abc053_b
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int first_A_index = s.find_first_of('A');
  int last_Z_index = s.find_last_of('Z');
  int ans = last_Z_index - first_A_index + 1;
  cout << ans << endl;
}
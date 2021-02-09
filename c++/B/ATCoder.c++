// https://atcoder.jp/contests/abc122/tasks/abc122_b
#include<bits/stdc++.h>
using namespace std;

bool check(char c) {
  return (c == 'A' ||
        c == 'C' ||
        c == 'G' ||
        c == 'T');
}

int main() {
  string S;
  cin >> S;
  
  int ans = 0;
  int count = 0;
  for (int i = 0; i < S.size(); i++) {
    if (check(S.at(i))) {
      count++;
      ans = max(ans, count);
    } else {
      // ans = max(ans, count);
      count = 0;
    }
  }
  
  // ans = max(ans, count);
  
  cout << ans << endl;
}
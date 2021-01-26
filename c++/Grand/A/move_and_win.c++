// https://atcoder.jp/contests/agc020/tasks/agc020_a
#include<bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  
  string ans;
  
  int space = B - A  - 1;
  
  if (space % 2 == 0) {
    ans = "Borys";
  } else {
    ans = "Alice";
  }
  
  cout << ans << endl;
}
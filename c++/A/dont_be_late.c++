// https://atcoder.jp/contests/abc177/tasks/abc177_a
#include<bits/stdc++.h>
using namespace std;

int main() {
  int D, T, S; cin >> D >> T >> S;
  string ans = "No";
  
  if (S * T >= D ) ans = "Yes";
  
  cout << ans << endl;
}
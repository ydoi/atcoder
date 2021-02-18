// https://atcoder.jp/contests/abc191/tasks/abc191_a
#include<bits/stdc++.h>
using namespace std;

int main() {
  int V, T, S, D;
  cin >> V >> T >> S >> D;
  
  string ans = "No";
  if (D < V * T || V * S < D) ans = "Yes";
  
  cout << ans << endl;
}
// https://atcoder.jp/contests/abc181/tasks/abc181_a
#include<bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  string ans = N % 2 == 0 ? "White" : "Black";
  cout << ans << endl;
}
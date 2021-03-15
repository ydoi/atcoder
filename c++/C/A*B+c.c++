// https://atcoder.jp/contests/abc179/tasks/abc179_c
#include<bits/stdc++.h>
using namespace std;
int main() {
  int N; cin >> N;
  int ans = 0;
  for (int a = 1; a <= N; a++) {
    for (int b = 1; a * b <= N; b++) {
      int c = N - a * b;
      if (c > 0 && c < N) ans++;
    }
  }
  
  cout << ans << endl;
}
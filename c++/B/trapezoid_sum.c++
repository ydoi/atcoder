// https://atcoder.jp/contests/abc181/tasks/abc181_b
#include<bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  
  long long ans = 0;
  for (int i = 0; i < N; i++) {
    long long a, b; cin >> a >> b;
    ans += (a + b) * (b - a + 1) / 2;
  }
  
  cout << ans << endl;
}
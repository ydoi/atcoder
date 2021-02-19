// https://atcoder.jp/contests/s8pc-6/tasks/s8pc_6_b
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  long long ans = 0;
  long long in = a[n / 2];
  long long out = b[n / 2];
  for (int i = 0; i < n; i++) {
    ans += abs(a[i] -  b[i]);
    ans += abs(in - a[i]);
    ans += abs(out - b[i]);
  }
  cout << ans << endl;
}
// https://atcoder.jp/contests/abc178/tasks/abc178_c
#include<bits/stdc++.h>
using namespace std;
int main() {
  long long N; cin >> N;
  long long all = 1LL;
  long long one = 1LL;
  long long both = 1LL;
  long long mod = 1000000007;
  for (int i = 0; i < N; i++) all = (all * 10LL) % mod;
  for (int i = 0; i < N; i++) one = (one * 9LL) % mod;
  for (int i = 0; i < N; i++) both = (both * 8LL) % mod;
  
  long long ans = (all + both - 2LL * one) % mod;
  //ans = (ans + mod) % mod;
  cout << ans << endl;
}
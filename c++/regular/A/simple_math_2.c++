// https://atcoder.jp/contests/arc111/tasks/arc111_a
#include<bits/stdc++.h>
using namespace std;

int modpow(int p, long long n, int mod) {
    if (n == 0) return 1;
    int t = modpow(p, n / 2, mod);
    return n % 2 == 0 ? 1LL * t * t % mod : 1LL * t * t % mod * p % mod;
}
 
int main() {
  long long N;
  int M;
  cin >> N >> M;
  cout << (modpow(10, N, M * M) / M) % M << endl;
}
 
 

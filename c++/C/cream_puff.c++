// https://atcoder.jp/contests/abc180/tasks/abc180_c
#include <bits/stdc++.h>
using namespace std;
int main() {
  long long N; cin >> N;
  set<long long> data;
  for (long long i = 1; i <= (long long)sqrt(N); i++) {
    if (N % i == 0) {
      data.insert(i);
      data.insert(N / i);
    }
  }
  
  for (auto n : data) cout << n << endl;
}
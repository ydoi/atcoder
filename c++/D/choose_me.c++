// https://atcoder.jp/contests/abc187/tasks/abc187_d
#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> data(N);
  
  long long max_aoki = 0;
  long long sum_takahashi = 0;
  for (int i = 0; i < N; i++) {
    long long a, b;
    cin >> a >> b;
    max_aoki += a;
    data.at(i) = 2 * a + b;
  }
  sort(data.begin(), data.end());
  reverse(data.begin(), data.end());
  
  int ans = 0;
  for (int i = 0; i < N; i++) {
    ans++;
    sum_takahashi += data.at(i);
    if (sum_takahashi > max_aoki) {
      break;
    }
  }
  
  cout << ans << endl;
}
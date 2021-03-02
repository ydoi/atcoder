// https://atcoder.jp/contests/abc182/tasks/abc182_b
#include<bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> data(N);
  for (int i = 0; i < N; i++) cin >> data.at(i);
  sort(data.begin(), data.end());
  
  int max_gcd = 0;
  int max_k = 0;
  
  for (int k = 2; k <= data.at(N - 1); k++) {
    int gcd = 0;
    for (int i = 0; i < N; i++) {
      if (data.at(i) % k == 0) gcd++;
    }
    if (gcd > max_gcd) {
      max_gcd = gcd;
      max_k = k;
    }
  }
  
  cout << max_k << endl;
}
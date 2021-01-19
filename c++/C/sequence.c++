// https://atcoder.jp/contests/abc059/tasks/arc072_a
#include <bits/stdc++.h>
using namespace std;

long long calc(long long pn, vector<long long> &data) {
  long long ans = 0;
  long long sum = 0;
  for (int i = 0; i < data.size(); i++) {
    sum += data.at(i);
    if ((sum > 0 ? 1 : sum < 0 ? -1 : 0) != pn) {
      ans += abs(sum) + 1;
      sum = pn;
    }
    pn *= -1;
  }
  return ans;
}

int main() { 
  int N;
  cin >> N;
  vector<long long> data(N);
  for (int i = 0; i < N; i++) cin >> data.at(i);
  cout << min(calc(1, data), calc(-1, data)) << endl;
}
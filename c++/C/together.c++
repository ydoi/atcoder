// https://atcoder.jp/contests/abc072/tasks/arc082_a
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  map<long long, long long> data;
  
  for (int i = 0; i < N; i++) {
    long long tmp;
    cin >> tmp;
    data[tmp - 1]++;
    data[tmp]++;
    data[tmp + 1]++;
  }
  
  long long ans = 0;
  for (auto a : data) {
    ans = max(ans, a.second);
  }
  
  cout << ans << endl;
}
// https://atcoder.jp/contests/abc188/tasks/abc188_b
#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> As(N);
  for (int i = 0; i < N; i++) cin >> As.at(i);
  vector<int> Bs(N);
  for (int i = 0; i < N; i++) cin >> Bs.at(i);
  
  int inner_product = 0;
  for (int i = 0; i < N; i++) {
    inner_product += (As.at(i) * Bs.at(i));
  }
  string ans = inner_product == 0 ? "Yes" : "No";
  
  cout << ans << endl;
}

// https://atcoder.jp/contests/abc200/tasks/abc200_c
#include<bits/stdc++.h>
using namespace std;
int main(){
  int N; cin >> N;
  vector<int> data(N);
  vector<long long> r(200, 0);
  
  for (int i = 0; i < N; ++i) {
    cin >> data.at(i);
    r[data.at(i) % 200]++;
  }
  
  long long ans = 0;
  //for (auto n : r) {
  //  cout << n.first <<"," << n.second << endl;
  //}
  for (int i = 0; i < 200; ++i) {
    ans += (r[i] * (r[i] - 1) / 2);
  }
  
  cout << ans << endl;
}
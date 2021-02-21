// https://atcoder.jp/contests/joi2007ho/tasks/joi2007ho_c
#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  set<pair<int, int>> data;
  for (int i  = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    data.insert(make_pair(a, b));
  }
  
  int ans = 0;
  for (auto a : data) {
    for (auto b : data) {
      if (a == b) continue;
      pair<int, int> c = make_pair(b.first - b.second + a.second, b.first + b.second - a.first);
      if (!data.count(c)) continue;
      pair<int, int> d = make_pair(a.first - b.second + a.second, a.second + b.first - a.first);
      if (!data.count(d)) continue;
      
      int s_before_sqrt = (pow(a.first - b.first, 2) + pow(a.second - b.second, 2));

      if (ans < s_before_sqrt) ans = s_before_sqrt;
    }
  }
  
  cout << ans << endl;
}
// https://atcoder.jp/contests/abc095/tasks/abc095_b
#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, X;
  cin >> N >> X;
  vector<int> data(N);
  int sum = 0;
  for (int i = 0; i < N; i++) { 
    cin >> data.at(i);
    sum += data.at(i);
  }
  
  int ans = N;
  int remainder = X - sum;
  sort(data.begin(), data.end());
  ans += remainder / data.at(0);
  cout << ans << endl;
}
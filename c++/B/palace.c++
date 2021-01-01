// https://atcoder.jp/contests/abc113/tasks/abc113_b
#include<bits/stdc++.h>
using namespace std;

double sign(double A){
    return (A>0)-(A<0);
}

int main(){
  int N, T, A;
  cin >> N >> T >> A;
  vector<int> data(N);
  for (int i = 0; i < N; i++) cin >> data.at(i);
  
  double near = 100000;
  int ans;
  
  for (int i = 0; i < N; i++) {
    double temperature = T - data.at(i) * 0.006;
    double diff = abs(A - temperature);
    if (diff < near) {
      near = diff;
      ans = i;
    }
  }
  cout << ans + 1 << endl;
}
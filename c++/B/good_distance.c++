// https://atcoder.jp/contests/abc133/tasks/abc133_b
#include <bits/stdc++.h>
using namespace std;

bool is_integer(double x){
  return floor(x)==x;
}

double calc_distance(vector<int> &y, vector<int> &z) {
  double sum = 0;
  for (int i = 0; i < y.size(); i++) {
    sum += pow(y.at(i) - z.at(i), 2);
  }
  return sqrt(sum);
}

int main(){
  int N, D;
  cin >> N >> D;
  vector<vector<int>> data(N, vector<int>(D));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < D; j++) {
      cin >> data.at(i).at(j);
    }
  }
  
  int ans = 0;
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      if (is_integer(calc_distance(data.at(i), data.at(j)))) ans++;
    }
  }
  cout << ans << endl;
}
// https://atcoder.jp/contests/abc180/tasks/abc180_b
#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; cin >> N;
  vector<int> data(N);
  for (int i = 0; i < N; i++) cin >> data.at(i);
  
  long long manhattan = 0;
  long long euclid_before_root = 0;
  long long chebychef = 0;
  for (int i = 0; i < N; i++) {
    manhattan += abs(data.at(i));
    euclid_before_root += pow(data.at(i), 2);
    if (chebychef < abs(data.at(i))) chebychef = abs(data.at(i));
  }
  
  cout << manhattan << endl;
  cout << printf("%.10f", sqrt(euclid_before_root)) << endl;
  cout << chebychef << endl;
}
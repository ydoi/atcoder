// https://atcoder.jp/contests/abc102/tasks/abc102_b
#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> data(N);
  for (int i = 0; i < N; i++) cin >> data.at(i);
  
  int max = 0;
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      int diff = abs(data.at(i) - data.at(j));
      if (diff > max) max = diff;
    }
  }
  
  cout << max << endl;
}
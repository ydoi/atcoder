// https://atcoder.jp/contests/abc184/tasks/abc184_b
#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, X;
  string S;
  cin >> N >> X >> S;
  for (int i = 0; i < N; i++) {
    if (S.at(i) == 'o') X++;
    else if (X > 0) {
      X--;
    }
  }
  cout << X << endl;
}
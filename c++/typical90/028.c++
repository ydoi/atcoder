// https://atcoder.jp/contests/typical90/tasks/typical90_ab
#include<bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int N; cin >> N;
  int lx[100009], ly[100009], rx[100009], ry[100009];

  for (int i = 0; i < N; ++i) cin >> lx[i] >> ly[i] >> rx[i] >> ry[i];
  
  int dim[1009][1009];
  int ans[100009];
  
  // 二次元いもす法
  for (int i = 0; i < N; ++i) {
    dim[lx[i]][ly[i]] += 1;
    dim[lx[i]][ry[i]] -= 1;
    dim[rx[i]][ly[i]] -= 1;
    dim[rx[i]][ry[i]] += 1;
  }
  
  for (int i = 0; i <= 1000; ++i) {
    for (int j = 1; j <= 1000; ++j) {
      dim[i][j] += dim[i][j - 1];
    }
  }
  
  for (int i = 1; i <= 1000; ++i) {
    for (int j = 0; j <= 1000; ++j) {
      dim[i][j] += dim[i - 1][j];
    }
  }
  
  for (int i = 0; i <= 1000; ++i) {
    for (int j = 0; j <= 1000; ++j) {
      // 重なりがある部分を合計
      if (dim[i][j] >= 1) ans[dim[i][j]] += 1;
    }
  }
  
  for (int i = 1; i <= N; ++i)  cout << ans[i] << endl;
}
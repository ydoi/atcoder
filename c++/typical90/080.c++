//https://atcoder.jp/contests/typical90/tasks/typical90_cb
#include<bits/stdc++.h>
using namespace std;

int main() {
  int N, D; cin >> N >> D;
  vector<long long> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A.at(i);
  }

  long long ans = 0;

  //Aの部分集合の全パターン
  for (int i = 0;  i < (1 << N); ++i) {
    long long bit = 0;
    int conditions = 0;
    for (int j = 0; j < N; ++j) {
      if ((i >> j) & 1) {
        bit |= A.at(j);
        //部分集合に含まれるAを数える
        ++conditions;
      }
    }
    int free_digits = 0;
    for (int j = 0; j < D; ++j) {
      // xの桁のうち、自由に選べる桁は部分集合のAの桁いずれも０の桁
      // 例
      // A[0]: 000１１0
      // A[1]: 010011
      // x:    ?0?000
      // 4, 6桁目の2桁 -> xは2^2パターン
      if (((bit >> j) & 1) == 0) {
        ++free_digits;
      }
    }

    if (conditions % 2 == 0) {
      ans += (1LL << free_digits);
    }
    else {
      ans -= (1LL << free_digits);
    }
  }
  cout << ans << endl;
}

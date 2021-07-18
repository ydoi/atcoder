// https://atcoder.jp/contests/typical90/tasks/typical90_n
#include<bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int N; cin >> N;
  vector<long long> students(N);
  vector<long long> schools(N);
  for (int i = 0; i < N; ++i) cin >> students.at(i);
  for (int i = 0; i < N; ++i) cin >> schools.at(i);
  
  // ソートして貪欲法
  sort(students.begin(), students.end());
  sort(schools.begin(), schools.end());
  long long ans = 0;
  for (int i = 0; i < N; ++i) {
    ans += abs(students.at(i) - schools.at(i));
  }
  cout << ans << endl;
}
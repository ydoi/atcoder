// https://atcoder.jp/contests/agc025/tasks/agc025_a
#include<bits/stdc++.h>
using namespace std;

int sum_digit(long long num) {
  string num_str = to_string(num);
  long long result = 0;
  for (int i = 0; i < num_str.size(); i++) {
    result += num_str.at(i) - 48;
  }
  return result;
}

int main(){
  long long N;
  cin >> N;
  
  long long ans = 100000;
  for (int i = 1; i < N; i++) {
    long long A = i;
    long long B = N - i;
    long long sum = sum_digit(A) + sum_digit(B);
    if (sum < ans) ans = sum;
  }
  cout << ans << endl;
  
}
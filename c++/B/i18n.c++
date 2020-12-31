// https://atcoder.jp/contests/abc069/tasks/abc069_b
#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  auto start = S.at(0);
  auto number = to_string(S.size() - 2);
  auto end = S.at(S.size() - 1);
  cout << start << number << end << endl;
}
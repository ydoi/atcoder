// https://atcoder.jp/contests/abc095/tasks/abc095_a
#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  
  int topping_count = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == 'o') topping_count++;
  }
  int result = (topping_count * 100) + 700;
  cout << result << endl;
}
// https://atcoder.jp/contests/abc088/tasks/abc088_b
#include <bits/stdc++.h>
using namespace std;

vector<int> sort_desc(vector<int> cards) {
  sort(cards.begin(), cards.end());
  reverse(cards.begin(), cards.end());
  return cards;
}

int main() {
  int n;
  cin >> n;
  
  vector<int> cards(n);
  for (int i = 0; i < n; i++) {
    cin >> cards.at(i);
  }
  cards = sort_desc(cards);
  
  int alice = 0;
  int bob = 0;
  
  for (int i = 0; i < n; i++) {
    if (i == 0 || i % 2 == 0) {
      alice += cards.at(i);
    } else {
      bob += cards.at(i);
    }
  }
  
  cout << alice - bob << endl;
}
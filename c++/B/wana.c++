// https://atcoder.jp/contests/abc002/tasks/abc002_2
#include<bits/stdc++.h>
using namespace std;

int main(){
  string W; cin >> W;
  string ans = "";
  for (int i = 0; i < W.size(); ++i) {
    char now = W.at(i);
    if (now == 'a' ||
        now == 'i' ||
        now == 'u' ||
        now == 'e' ||
        now == 'o') continue;
    ans.push_back(now);
  }
  
  cout << ans << endl;
}
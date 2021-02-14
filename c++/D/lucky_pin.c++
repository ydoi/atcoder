// https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_d
#include<bits/stdc++.h>
using namespace std;

int main(){
  string S;
  int N;
  cin >> N;
  cin >> S;
  
  int ans = 0;
  for (int i = 0; i < 1000; i++) {
    string s;
    if (i < 10) {
      s += '0';
      s += '0';
      s += to_string(i);
    } else if (i < 100) {
      s += '0';
      s += to_string(i);
    } else {
      s += to_string(i);
    }
    
    int k = 0;
    for (int j = 0; j < N; j++) {
      if (s.at(k) == S.at(j)) {
        k++;
        if (k == 3) {
          ans++;
          break;
        }
      }
    }
  }
  
  cout << ans << endl;
}
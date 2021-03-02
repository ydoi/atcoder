// https://atcoder.jp/contests/abc182/tasks/abc182_c
#include<bits/stdc++.h>
using namespace std;

int main() {
  long long N; cin >> N;
  int k = to_string(N).size();
  
  int ans = -1;
  for (int bit = 1; bit < (1 << k); bit++) {
    string linked_string = "";
    for (int i = 0; i < k; i++){
      if (bit & (1 << i)) {
        linked_string.push_back(to_string(N).at(i));
      }
    }
    int removed_count = k - linked_string.size();
    if (stoll(linked_string) % 3 == 0) {
      if (ans == -1) {
        ans = removed_count;
      } else if (ans > removed_count) {
        ans = removed_count;
      }
    } 
  }
  
  cout << ans << endl;
}

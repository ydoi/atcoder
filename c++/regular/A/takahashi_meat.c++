// https://atcoder.jp/contests/arc029/tasks/arc029_1
#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  int ans = 100;
  vector<int> data(N);
  
  for(int i = 0; i < N; ++i) cin >> data.at(i);
  
  
  for(int bit = 0; bit < (1 << N); ++bit){
  	int a = 0, b = 0;
    for(int i = 0; i < N; ++i) {
      if(bit & (1 << i)){
        a += data.at(i);
      }else{
      	b += data.at(i);
      }   
    }
    ans = min(ans, max(a,  b));
  }
  
  cout << ans << endl;

}
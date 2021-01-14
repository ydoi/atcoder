// https://atcoder.jp/contests/abc057/tasks/abc057_c
#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N, A, B;
  cin >> N;
  
  for(long long i = sqrt(N); i >= 1; i--){
    if(N % i==0){
      A=i;
      break;
    }
  }
  
  B = N / A;
  int ans = to_string(B).size();
  
 
  cout << ans << endl;
}
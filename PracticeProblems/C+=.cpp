#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
 
  int t;
  cin >> t;
  string output;
  int a, b, n;

  for(int i = 0; i < t; i++){
    cin >> a >> b >> n;
    int count = 0;

    while(a <= n && b <= n){
      if(a > b){
        b += a;
        count++;
      }
      else{
        a += b;
        count++;
      }
    }

    output += to_string(count) + "\n";
  }

  cout << output;
}
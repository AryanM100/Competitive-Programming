#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n, k;
    bool already = true;
    cin >> n >> k;

    int a[n];
    for(int j = 0; j < n; j++) cin >> a[j];

    if(k == 1){
      for(int j = 0; j < n - 1; j++){
        if(a[j] > a[j+1]){
          already = false;
          break;
        }
      }
      if(already == false) output += "NO\n";
      else output += "YES\n";
    }
    else{
      output += "YES\n";
    }
  }
  
  cout << output;
}
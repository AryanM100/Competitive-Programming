#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n;
    cin >> n;

    if(n / 2  % 2 != 0) output += "NO\n";
    else{
      output += "YES\n";
      
      for(int j = 0; j < n/2; j++){
        output += to_string(2 * (j + 1)) + " ";
      }
      for(int j = n/2; j < n; j++){
        if(j == 3 * n / 4) output += to_string(n + 1) + " ";
        else output += to_string(2 * (j - n/2 + 1) - 1) + " ";
      }
      output += "\n";
    }
  }
  
  cout << output;
}
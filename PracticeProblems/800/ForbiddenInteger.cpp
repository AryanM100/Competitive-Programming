#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n, k, x;
    cin >> n >> k >> x;

    if(x != 1){
      output += "YES\n";
      output += to_string(n) + "\n";
      for(int j = 0; j < n; j++) output += "1 ";
      output += "\n";
    }
    else{
      if(k > 2){
        if(n % 2 == 0){
          output += "YES\n";
          output += to_string(n / 2) + "\n";
          for(int j = 0; j < n / 2; j++) output += "2 ";
          output += "\n";
        }
        else{
          output += "YES\n";
          output += to_string((n - 3)/2 + 1) + "\n";
          for(int j = 0; j < (n - 3)/2; j++){
            output += "2 ";
          }
          output += "3";
          output += "\n";
        }
      }
      else if(k == 2){
        if(n % 2 == 0){
          output += "YES\n";
          output += to_string(n / 2) + "\n";
          for(int j = 0; j < n / 2; j++) output += "2 ";
          output += "\n";
        }
        else{
          output += "NO\n";
        }
      }
      else output += "NO\n";
    }
  }
  
  cout << output;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int t;
  cin >> t;
  int n, k;
  string output = "";

  for(int i = 0; i < t; i++){
    cin >> n >> k;
    string s = "";

    if(k > 0){
    s += "1";
    }

    for(int j = 0; j < n - k - 1; j++){
      s += "0";
    }

    for(int j = 0; j < k - 1; j++){
      s += "1";
    }

    if(n - k != 0){
    s += "0";
    }
    
    output += s + "\n";
  }
  

  cout << output;
}
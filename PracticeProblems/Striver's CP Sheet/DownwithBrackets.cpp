#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int t;
  cin >> t;
  string output;
  
  for(int i = 0; i < t; i++){
    string s;
    cin >> s;

    int bal = 0;
    int count = 0;

    for(int j = 1; j < s.length() - 1; j++){
      if(s[j] == '(') bal++;
      else bal--;

      if(bal < 0){
        output += "yes\n";
        count = 1;
        break;
      } 
    }
    if(count == 0){
      if(bal == 0) output += "no\n";
      else output += "yes\n";
    }
  }

  cout << output;
  
}
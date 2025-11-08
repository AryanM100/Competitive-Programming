#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int t;
  int n;
  cin >> t;
  string output;

  for(int j = 0; j < t; j++){
    cin >> n;

    string s = "";
    cin >> s;
    
    bool done = false;

    for(int i = 1; i < n - 1; ++i){
      string a = s.substr(0, i);
      string b = s.substr(i, 1);
      string c = s.substr(i + 1);

      string ac = a + c;

      if(ac.find(b) != string::npos){
        output += "yes\n";
        done = true;
        break;
      }
    }

    if(done == false) output += "no\n";
  }

  cout << output;
}
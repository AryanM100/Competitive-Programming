#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n;
    int c = 0;
    int dot = 0;
    bool mc = false;
    int count = 0;
    cin >> n;

    string s;
    cin >> s;

    for(int j = 0; j < n; j++){
      if(s[j] == '.') dot++;
      else continue;
      for(int k = j; k < n; k++){
        if(s[k] == '#') break;
        if(s[j] == '.' && s[k] == '.') c++;
      }

      if(c == 3){
        mc = true;
        break;
      }
      c = 0;
    }

    if(mc == true) count = 2;
    else count = dot;

    output += to_string(count) + "\n";
  }
  
  cout << output;
}
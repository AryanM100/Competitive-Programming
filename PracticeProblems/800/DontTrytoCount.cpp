#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n, m;
    int count = 0;
    int j = 6;
    bool nvm = false;
    cin >> n >> m;

    string x;
    cin >> x;

    string s;
    cin >> s;

    while(j > 0){
      if(x.find(s) != string::npos) break;
      else{
        count++;
        x += x;
      }

      if(j == 1) nvm = true;

      j--;
    }

    if(nvm == false) output += to_string(count) + "\n";
    else output += "-1\n";
  }
  
  cout << output;
}
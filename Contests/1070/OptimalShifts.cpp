#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n;
    char a;
    char prev;
    int count = 0;
    string y;
    cin >> n;

    string s;
    cin >> s;

    while(s.find("0") != string::npos){
      y = s;
      count++;
      for(int j = 0; j < n; j++){
        if(j == 0){
          prev = s[j];
          s[j] = s[n - 1];
        }
        else{
          a = s[j];
          s[j] = prev;
          prev = a;
        }
      }

      for(int j = 0; j < n; j++){
        int b1 = s[j] - '0';
        int b2 = y[j] - '0';
        s[j] = (b1 | b2) + '0';
      }
    }

    output += to_string(count) + "\n";
  }
  
  cout << output;
}
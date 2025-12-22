#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    char a[10][10];
    int p = 0;
    int c = 0; int d = 0;

    for(int j = 0; j < 10; j++){
      for(int k = 0; k < 10; k++){
        cin >> a[j][k];

        if(a[j][k] == 'X'){
          if(j > 5) c = 9 - j;
          else c = j;
          if(k > 5) d = 9 - k;
          else d = k;

          if(c == 5 && d == 5) p += 5;
          else p += min(c, d) + 1;
        }
      }
    }

    output += to_string(p) + "\n";
  }
  
  cout << output;
}
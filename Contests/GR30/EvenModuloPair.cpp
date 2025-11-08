#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n;
    int x, y;
    int c = 0;
    cin >> n;

    int a[n];
    for(int j = 0; j < n; j++) cin >> a[j];

    for(int j = 0; j < n; j++){
      for(int k = j + 1; k < n; k++){
        if((a[k] % a[j]) % 2 == 0){
          output += to_string(a[j]) + " " + to_string(a[k]) + "\n";
          c++;
          break;
        }
      }
      if(c == 1) break;
    }

    if(c == 0) output += "-1\n";
  }
  
  cout << output;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int t;
  cin >> t;
  int n, s;
  string output;

  for(int i = 0; i < t; i++){
    cin >> n >> s;

    int x[n];
    int c = 0;
    int k;
    bool in;

    for(int j = 0; j < n; j++){
      cin >> x[j];
    }

    for(int j = 0; j < n; j++){
      if(s <= x[j]){
        k = j;
        break;
      }
    }

    if(s <= x[0]){
      c = x[n - 1] - s;
    }
    else if(s >= x[n - 1]){
      c = s - x[0];
    }
    else if(s - x[0] >= x[n - 1] - s){
      c = x[n - 1] - s;
      c += x[n - 1] - x[0];
    }
    else{
      c = s - x[0];
      c += x[n - 1] - x[0];
    }

    output += to_string(c) + "\n";
  }
  
  cout << output;
}
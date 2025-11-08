#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;
  int n;

  for(int i = 0; i < t; i++){
    cin >> n;

    int a[n];
    bool done = false;
    int op = 0;

    for(int j = 0; j < n; j++) cin >> a[j];

    for(int j = 0; j < n - 1; j++){
      if(abs(a[j] - a[j+1]) <= 1){
        bool = true;
        break;
      }
    }

    if(bool = true) output += "0\n";

    for(int j = 0; j < n - 1; j++){
      if(a[j] >= a[j+1] && a[j] < a[j+2]){
        
      }
    }
  }
  
  cout << output;
}
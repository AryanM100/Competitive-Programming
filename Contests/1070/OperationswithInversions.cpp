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
    cin >> n;
    int a[n];
    int b[n];
    for(int j = 0; j < n; j++) cin >> a[j];
    for(int j = 0; j < n; j++) b[j] = 1;

    for(int j = 0; j < n; j++){
      for(int k = j + 1; k < n; k++){
        if(a[j] > a[k] && b[k] != 0){
          c++;
          b[k] = 0;
        }
      }
    }

    output += to_string(c) + "\n";
  }
  
  cout << output;
}
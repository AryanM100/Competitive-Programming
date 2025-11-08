#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int t;
  int n;
  cin >> t;

  for(int i = 0; i < t; i++){
    cin >> n;
    
    string s;

    for(int j = 0; j < n - 1; j++){
      cout << j+2 << 1 << n-j << endl;
    }

    for(int j = 0; j < 2; j++){
      cout << n-j << j+1 << n << endl;
    }
  
  }
  
}
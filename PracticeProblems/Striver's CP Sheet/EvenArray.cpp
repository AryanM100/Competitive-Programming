#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n;
    int e = 0;
    int o = 0;
    int E, O = 0;
    int count = 0;
    cin >> n;

    int a[n];

    for(int j = 0; j < n; j++) cin >> a[j];

    if(n % 2 == 0){
      E = n/2;
      O = E;
    }
    else{
      E = (n+1)/2;
      O = n - E;
    }

    for(int j = 0; j < n; j++){
      if(a[j] % 2 == 0) e++;
      else o++;
    }
    
    if(e == E && o == O){
      for(int j = 0; j < n; j++){
        if(a[j] % 2 != j % 2){
          count++;
        }
      }

      output += to_string(count/2) + "\n";
    }
    else output += "-1\n";
  }
  
  cout << output;
}
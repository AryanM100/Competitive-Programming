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
    int e = 0;
    int o = 0;

    for(int j = 0; j < n; j++){
      cin >> a[j];
    }

    for(int j = 0; j < n; j++){
      if(a[j] % 2 == 0) e++;
      else o++;
    }

    if(o % 2 != 0) output += "YES\n";
    else{
      if(e >= 1 && o != 0) output += "YES\n";
      else output += "NO\n";
    }
  }
  
  cout << output;
}
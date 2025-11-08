#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n, m = 0;
    int l = 0;
    cin >> n >> m;

    if(m % 2 == 0) l = m * n / 2;
    else{
      if(n % 2 == 0) l = m * n / 2;
      else l = (m * n + 1) / 2;
    }

    output += to_string(l) + "\n";
  }
  
  cout << output;
}
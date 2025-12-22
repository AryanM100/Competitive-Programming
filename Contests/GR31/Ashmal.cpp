#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n;
    cin >> n;

    string a[n];
    string s = "";

    for(int j = 0; j < n; j++) cin >> a[j];

    for(int j = 0; j < n; j++){
      if(s + a[j] >= a[j] + s) s = a[j] + s;
      else s = s + a[j];
    }

    output += s + "\n";
  }
  
  cout << output;
}
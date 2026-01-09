#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n;
    cin >> n;

    int a[n];
    for(int j = 0; j < n; j++) cin >> a[j];

    for(int j = 0; j < n; j++){
      output += to_string(n - a[j] + 1) + " ";
    }
    output += "\n";
  }
  
  cout << output;
}
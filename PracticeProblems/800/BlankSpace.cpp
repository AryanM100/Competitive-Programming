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
    int count = 0;
    int max = INT_MIN;

    int a[n];
    for(int j = 0; j < n; j++) cin >> a[j];

    for(int j = 0; j < n; j++){
      if(a[j] == 0) count++;
      else{
        if(count > max) max = count;
        count = 0;
      }
    }

    if(count > max) max = count;
    output += to_string(max) + "\n";
  }
  
  cout << output;
}
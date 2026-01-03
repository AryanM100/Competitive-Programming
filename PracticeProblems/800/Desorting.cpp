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
    float diff = INT_MAX;
    bool alr = true;

    int a[n];
    for(int j = 0; j < n; j++) cin >> a[j];

    for(int j = 1; j < n; j++){
      if(a[j] < a[j-1]) alr = false;
      if(a[j] - a[j-1] < diff) diff = a[j] - a[j-1];
    }

    if(alr == true) output += to_string(int(ceil((diff+1)/2))) + "\n";
    else output += "0\n";
  }
  
  cout << output;
}
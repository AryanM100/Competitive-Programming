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

    vi b(n);
    for(int j = 0; j < n; j++) cin >> b[j];

    vi a;
    a.pb(b[0]);

    for(int j = 1; j < n; j++){
      if(b[j] >= b[j-1]) a.pb(b[j]);
      else{
        a.pb(b[j]);
        a.pb(b[j]);
      }
    }

    // output += to_string(a.size()) + "\n";
    // for(int j = 0; j < a.size(); j++) output += to_string(a[j]) + " ";
    // output += "\n";

    cout << a.size() << endl;
    for(int j = 0; j < a.size(); j++) cout << a[j] << " ";
    cout << endl;
  }
  // cout << output;
}
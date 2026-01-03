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
    int max = INT_MIN;

    vi a(n);
    vi b, c;
    for(int j = 0; j < n; j++){
      cin >> a[j];
      if(a[j] > max) max = a[j];
    }

    for(int j = 0; j < n; j++){
      if(a[j] == max) c.pb(a[j]);
      else b.pb(a[j]);
    }

    if(b.size() != 0 && c.size() != 0){
      cout << b.size() << " " << c.size() << endl;
      for(int j = 0; j < b.size(); j++) cout << b[j] << " ";
      cout << endl;
      for(int j = 0; j < c.size(); j++) cout << c[j] << " ";
      cout << endl;
    }
    else{
      cout << "-1\n";
    }
  }
  
  cout << output;
}
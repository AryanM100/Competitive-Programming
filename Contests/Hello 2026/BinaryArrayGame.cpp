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
    bool pres = false;

    int a[n];
    for(int j = 0; j < n; j++){
      cin >> a[j];
      if(a[j] == 0 && (j != 0 && j != n-1)) pres = true;
    }

    if(a[0] == 1 || a[n-1] == 1) output += "Alice\n";
    else output += "Bob\n";
    // else if(pres == true){

    // }
  }
  
  cout << output;
}
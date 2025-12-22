#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n;
    int one = 0;
    int two = 0;
    int c = 0;
    int d = 0;
    cin >> n;

    int a[n];
    for(int j = 0; j < n; j++) cin >> a[j];

    one = a[0];

    if(n == 2) output += "YES\n";
    else{
      for(int j = 0; j < n; j++){
        if(a[j] == one) c++;
        else if(d == 0){
          two = a[j];
          d++;
        }
        else if(a[j] == two) d++;
      }

      if(c + d != n) output += "NO\n";
      else if(n % 2 == 0){
        if(c == 0 || d == 0) output += "YES\n";
        else if(c == d) output += "YES\n";
        else output += "NO\n";
      }
      else if(n % 2 != 0){
        if(c == 0 || d == 0) output += "YES\n";
        else if(c == (n+1)/2 || d == (n+1)/2) output += "YES\n";
        else output += "NO\n";
      }
    }
  }
  
  cout << output;
}
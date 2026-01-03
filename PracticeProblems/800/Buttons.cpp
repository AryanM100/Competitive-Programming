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
    int a, b, c;
    cin >> a >> b >> c;

    if(a > b) output += "First\n";
    else if(b > a) output += "Second\n";
    else{
      if(c % 2 == 0) output += "Second\n";
      else output += "First\n";
    }
  }
  
  cout << output;
}
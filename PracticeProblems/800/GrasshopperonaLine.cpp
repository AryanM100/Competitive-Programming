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
    int x, k;
    cin >> x >> k;

    if(x % k == 0){
      output += "2\n" + to_string(x - 1) + " 1\n";
    }
    else{
      output += "1\n" + to_string(x) + "\n";
    }
  }
  
  cout << output;
}
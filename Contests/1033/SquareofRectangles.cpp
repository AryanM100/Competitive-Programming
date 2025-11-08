#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  int l1, b1, l2, b2, l3, b3;
  string output;

  for(int i = 0; i < t; i++){
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

    int x = max({l1, l2, l3});
    int y = max({b1, b2, b3});

    if(x == b1 + b2 + b3 && l1 == l2 && l2 == l3) output += "yes\n";
    else if(y == l1 + l2 + l3 && b1 == b2 && b2 == b3) output += "yes\n";
    else if(2*x == l1 + l2 + l3 && x == b1 + b2 && b2 == b3) output += "yes\n";
    else if(2*y == b1 + b2 + b3 && l2 == l3 && l1 + l2 == y) output += "yes\n";
    else output += "no\n";
  }

  cout << output;
}
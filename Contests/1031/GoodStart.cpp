#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  ll w, h, a, b;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    cin >> w >> h >> a >> b;

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << abs(x1 - x2) << endl;
    cout << abs(y1 - y2) << endl;

    if((abs(x1 - x2) >=  2*a) || (abs(y1 - y2) >= 2*b)){
      if(abs(x1 - x2) >=  2*a){
        if()
      }
      else{

      }
      output += "yes\n";
    }
    else{
      output += "no\n";
    }
  }
  
  cout << output;

}
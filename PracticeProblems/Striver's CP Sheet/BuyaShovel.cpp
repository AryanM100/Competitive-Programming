#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int k, r;
  cin >> k >> r;
  int i = 1;
  string output;

  int a = k % 10;

  while(true){
    if((a*i) % 10 == r || (a*i) % 10 == 0){
      output += to_string(i) + "\n";
      break;
    }
    i++;
  }

  cout << output;
}
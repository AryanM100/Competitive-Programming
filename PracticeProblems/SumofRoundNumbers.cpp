#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int t;
  int n;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    cin >> n;
    string b = "";
    int count = 0;
    int j = 1;
    while(n > 0){
      int a = n % 10;

      if(a != 0){
        b += to_string(j * a) + " ";
        count++;
      }

      j *= 10;
      n /= 10;
    }

    output += to_string(count) + "\n" + b + "\n";
  }

  cout << output;
  
}
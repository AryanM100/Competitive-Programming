#include <iostream>

using namespace std;

int main(){

  int n, k;
  int t;
//1101011001
  cin >> t;
  int a = 0; //0
  int b = 0; //1
  string output = "";

  for(int i = 0; i < t; i++){
    a = 0;
    b = 0;
    cin >> n >> k;

    string s;
    cin >> s;

    for(int j = 0; j < n; j++){
      if(s[j] == '0'){
        a++;
      }
      else{
        b++;
      }
    }

    a -= n/2 - k;
    b -= n/2 - k;

    if(a < 0 || b < 0){
      output += "no\n";
      continue;
    }
    if(a % 2 == 1 || b % 2 == 1){
      output += "no\n";
    }
    else{
      output += "yes\n";
    }
  }

cout << output;

}
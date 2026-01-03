#include <iostream>

using namespace std;

int main(){
  
  int n;
  string s;
  int count = 0;

  cin >> n;
  cin >> s;

  int a = s.length();

  for(int i = 0; i < a; i++){
    if(s[i] == s[i+1]){
      count++;
    }
  }

  cout << count;
  
}
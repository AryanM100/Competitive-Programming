#include <iostream>

using namespace std;

int main(){
  
  string s;

  getline(cin, s);

  int n = s.length();

  int a = 0;
  int b = 0;

  for(int i = 0; i < n; i++){
    if(islower(s[i])){
      a++;
    }
    else{
      b++;
    }
  }
  
  if(a >= b){
    for(int i = 0; i < n; i++){
      s[i] = tolower(s[i]);
    }
  }
  else{
    for(int i = 0; i < n; i++){
      s[i] = toupper(s[i]);
    }
  }

  cout << s;

}
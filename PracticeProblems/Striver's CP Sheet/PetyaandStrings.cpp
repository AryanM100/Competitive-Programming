#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main(){
  
  string a, b;

  getline(cin, a);
  getline(cin, b);

  for(int i = 0; i < a.length(); i++){
    if(int(tolower(a[i])) > int(tolower(b[i]))){
      cout << "1";
      break;
    }
    else if(int(tolower(a[i])) == int(tolower(b[i]))){
      if(i == a.length() - 1){
      cout << "0";
      break;
      }
    }
    else{
      cout << "-1";
      break;
    }
  }
}
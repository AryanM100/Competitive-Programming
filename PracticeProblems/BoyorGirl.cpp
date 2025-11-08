#include <iostream>

using namespace std;

int main(){
  
  string a;
  int c;
  int count = 0;
  cin >> a;
  int n = a.length();

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(a[j] > a[j+1]){
        c = a[j];
        a[j] = a[j+1];
        a[j+1] = c;
      }
    }
  }

  //cout << a;

  for(int i = 0; i < n; i++){
    if(a[i] == a[i+1]){
      count++;
    }
  }

  //cout << count;

  if((n - count) % 2 == 0){
    cout << "CHAT WITH HER!";
  }
  else{
    cout << "IGNORE HIM!";
  }

}
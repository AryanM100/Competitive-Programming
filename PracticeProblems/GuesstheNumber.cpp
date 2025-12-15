#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  string t;
  int output;
  int a = 1; int b = 1000000;
  int c;

  while(true){
    c = (a + b) / 2;
    cout << c << endl;
    cin >> t;
    fflush(stdout);

    if(t == ">="){
      a = c;
    }
    else{
      b = c;
    }

    //cout << a << " " << b << endl;

    if(abs(a - b) == 1 && a != 999999){
      cout << "! " << a << endl;
      exit(0);
    }
    else if(abs(a - b) == 1 && a == 999999){
      cout << "999999" << endl;
      fflush(stdout);

      cin >> t;

      if(t == ">="){
        cout << "1000000" << endl;
        fflush(stdout);

        cin >> t;

        if(t == ">="){
          cout << "! " << "1000000" << endl;
          exit(0);
        }
        else{
          cout << "! " << "999999" << endl;
          exit(0);
        }
      }
    }
  }
}
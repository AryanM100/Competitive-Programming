#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  string t;
  cin >> t;
  string s;

  if(t == "first"){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++){
      a[i] += 96;
      s += (char)a[i];
    }

    cout << s << endl;
  }
  else{
    cin >> s;
    int n = s.length();
    int a[n];

    for(int i = 0; i < n; i++){
      a[i] = (int)s[i] - 96;
    }

    cout << n << endl;
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
  }
}
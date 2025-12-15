#include <bits/stdc++.h>

using namespace std;
#define ll long long

int giveMax(int a[], int n){
  int x = 0; int d = 0;
  for(int j = 0; j < n; j++){
    if(a[j] > x){
      x = a[j];
      d = j;
    }
  }

  return d;
}

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n, m;
    cin >> n >> m;
    int x = 0; int y = 0; int z = 0; int d = 0; int e = 0; int f = 0; int g = 0;
    int cnt = 0;
    int run = m;

    int a[n];
    int b[m];
    int c[m];

    for(int j = 0; j < n; j++) cin >> a[j];
    for(int j = 0; j < m; j++) cin >> b[j];
    for(int j = 0; j < m; j++) cin >> c[j];

    while(run){
      d = giveMax(a, n);
      x = a[d];

      for(int j = 0; j < m; j++){
        if(c[j] != 0 && x >= b[j]){
          a[d] = max(a[d], c[j]);
          b[j] = 0;
          c[j] = 0;
          cnt++;
        }
      }

      for(int j = 0; j < m; j++){
        if(c[j] == 0 && x >= b[j]){
          for(int k = 0; k < m; k++){
            if(c[k] == 0) g++;
          }
          if(g == m){
            a[d] = 0;
            b[j] = 0;
            cnt++;
          }
          else continue;
        }

        d = giveMax(a, n);
        x = a[d];

        cout << d << x << endl;
      }

      for(int k = 0; k < n; k++) cout << a[k] << " ";
      cout << endl;
      for(int k = 0; k < m; k++) cout << b[k] << " ";
      cout << endl;
      for(int k = 0; k < m; k++) cout << c[k] << " ";
      cout << endl;
      run--;
    }

    output += to_string(cnt) + "\n";
  }
  
  cout << output;
}
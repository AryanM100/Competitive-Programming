#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n;
    cin >> n;
    int x = 0;
    int y = 0;
    int count = 0;

    int a[n];
    for(int j = 0; j < n; j++){
      cin >> a[j];
      if(a[j] == 1) x++;
      else y++;
    }

    if(x < y){
      count += ceil((float(y - x)) / 2);
      x += count;
      y -= count;
    }
    if(y % 2 != 0) count++;

    output += to_string(count) + "\n";
  }
  
  cout << output;
}
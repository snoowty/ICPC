#include<iostream>

using namespace std;

int main() {
  int n, i;
  int a[210];

  cin >> n;

  for(i = 0; i < n; i++) cin >> a[i];

  int cnt = 0;
  while(true){
    for(i = 0; i < n; i++){

      a[i] = a[i]/2;
      if(a[i] % 2 != 0) break;
    }
    if(a[i] % 2 != 0) break;
    cnt++;
  }


  cout << cnt << endl;
return 0;
}

#include <iostream>

using namespace std;

int main(){
  int n,a,b;
  cin >> n >> a >> b;

  int sum = 0;
  int ans = 0;

  for(int i = 0; i <= n; i++){
    cout << i << endl;
  while(true){
    sum = sum + i%10;
    i = 1/10;
    i = 0;
    if(i == 0) break;
    return 0;
  }
cout << sum << endl;
  if(a <= sum && sum >= b) ans = ans + sum;
}
  cout << ans << endl;
}

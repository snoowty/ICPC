#include <iostream>

using namespace std;

int main(){
  int n,a,b;
  cin >> n >> a >> b;

  int sum = 0;
  int ans = 0;
  int x;
  for(int i = 1; i <= n; i++){
    sum = 0;
    cout << i << endl;
    x = i;
  while(x > 0){
    sum = sum + x%10;
    x /= 10;
  }
cout << sum << endl;
  if(sum >= a && sum <= b) ans = ans + i;
  cout << ans << endl;
}
  cout << ans << endl;
}

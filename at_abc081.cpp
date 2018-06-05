#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;

  int cnt = 0;
  if(a%10 == 1){
    cnt++;
  }
  if(a/10%10 == 1) {
    cnt++;
  }
  if(a/100 == 1) {
    cnt++;
  }

  cout << cnt << endl;

  return 0;
}

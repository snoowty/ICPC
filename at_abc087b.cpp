#include <iostream>
using namespace std;

int A,B,C,X;
int res = 0;

int main() {

  cin >> A >> B >> C >> X;

  for(int a = 0; a <= A; ++a) {
    for(int b = 0; b <= B; ++b) {
      for(int c = 0; c <= C; ++c) {
        if(500*a + 100*b + 50*c == X) ++res;
      }
    }
  }
  cout << res << endl;
}

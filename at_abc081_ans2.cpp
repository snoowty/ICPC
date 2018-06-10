#include <iostream>
#include <algorithm>
using namespace std;

int N, A[200];

int main()
{
  int dmin = 100;
  cin >> N;
  for(int i = 0; i < N; ++i) {
    cin >> A[i];
    int d = 0;
    while(A[i] % 2 == 0) {
      A[i] /= 2;
      ++d;
    }
    dmin = min(dmin, d);
  }
  cout << dmin << endl;
  return 0;
}

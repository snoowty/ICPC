#include <iostream>

using namespace std;

int N;
int d[110];
int main(){
cin >> N;

for (int i = 0; i < N; ++i) cin >> d[i];

int a[110];
int a_cnt = 1;

for(int i = 0; i < N; i++) {
  for(int j = 0; j < N; j++){
    if(d[i] == a[j]) break;
    if(j+1 == a_cnt) {
      a[j] = d[i];
      a_cnt++;
      break;
    }
  }
}
cout << a_cnt-1 << endl;

}

#include <iostream>
using namespace std;

int main() {
    int N;
    int t[110000], x[110000], y[110000];
    cin >> N;
    //初期は原点だから
    t[0] = x[0] = y[0] = 0;  // 初期状態
    //初期状態を除くため、i+1にしている。
    for (int i = 0; i < N; ++i) cin >> t[i+1] >> x[i+1] >> y[i+1];  // 1-index にしておく

    bool can = true;
    for (int i = 0; i < N; ++i) {
      //純粋に距離を計算している。？？
      //dtは3-0,distは(1-0)+(2-0)
        int dt = t[i+1] - t[i];
        int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
        //これがあればダメなパターンをかき出す。
        //求められている距離が可能な距離よりも遠い場合
        if (dt < dist) can = false;
        //求められている距離と可能なやつの偶数奇数が違う場合
        if (dist % 2 != dt % 2) can = false;  // dist と dt の偶奇は一致する必要あり！
    }

    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;
}

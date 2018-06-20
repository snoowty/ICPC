#include <iostream>
using namespace std;
int main(){
	//町の数が10個以下なのでワーシャルフロイドでも時間制限に間に合う
	int path,n,i,j,k;
	int length[10][10]={};

//初期化
while(cin>>path && path != 0){

	for(int u = 0; u < 10; u++){
		for (int v = 0; v < 10; v++)
		{
			if(u==v){
				/*穴埋め*/  //自己ループは無いので0を代入
        length[u][v] = 0;
			}else{
				/*穴埋め*/  //それ以外は大きい数を入れておく
        length[u][v] = 1500;
			}
		}

	}

	for(n=0;n<path;n++){
		cin>>i>>j;
		cin>>length[i][j];
		length[j][i]=length[i][j];
	}
//本計算
	n=10;
//ワ―シャルフロイド
for(k = 0; k < n; k++){
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      if(length[i][j] > length[i][k] + length[k][j]){
        length[i][j] = length[i][k] + length[k][j];
      }
    }
  }
}


	int dsum[10]={};
	for(i=0; i<10; i++){
		for (j = 0; j < 10; j++)
		{
			if(length[i][j]==1500){
				length[i][j]=0;
			}
			dsum[i]+=length[i][j];
		}
	}


	int min=1500;
	int minindex=0;
	for(i=0;i<10;i++){
		if(min>dsum[i] && dsum[i]!=0){
			min=dsum[i];
			minindex=i;
		}

	}

	cout<<minindex<<" "<<min<<endl;

	}
}

// robot coin collection.

#include<iostream>
using namespace std;

void CoinChange(int row,int column,int f[][6],int c[][6]){
	f[0][0]=c[0][0];
	for (int j=1;j<column;j++){
		f[0][j]=f[0][j-1]+c[0][j];
	}
	for (int i=1;i<row;i++){
		f[i][0]=f[i-1][0]+c[i][0];
		for(int j=1;j<column;j++){
			f[i][j]=max(f[i-1][j],f[i][j-1])+c[i][j];
		}
	}
}

int main(){
	int f[5][6]={0};
	int c[5][6]={
		{0,0,0,0,1,0},
		{0,1,0,1,0,0},
		{0,0,0,1,0,1},
		{0,0,1,0,0,1},
		{1,0,0,0,1,0}
	};
	CoinChange(5,6,f,c);
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
		  cout<<f[i][j]<<" ";
		  }
		  cout<<"\n";
	}
    return 0;
}

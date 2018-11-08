#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int mtrk[50][50];
	int n;
	cout<<"Masukan panjang matriks : ";
	cin>>n;
	cout<<endl;
	
	for(int k=0; k<n; k++){
		for(int l=0; l<n; l++){
			cout<<"Masukan ["<<k<<"]["<<l<<"] : ";
			cin>>mtrk[k][l];
			if(k+l==n-1)
			{
				mtrk[k][l]=0;
			}
		}
	}
	cout<<endl;
	for(int k=0; k<n; k++){
		for(int l=0; l<n; l++){
			cout<<setw(5)<<mtrk[k][l];
		}
		cout<<endl;
	}
	return 0;
}

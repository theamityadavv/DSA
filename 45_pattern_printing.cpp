//45. Print the following pattern:
// *
// * *
// * * * 
// * * * *

#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"enter the number of rows \n";
	cin>>m;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=i;j++){
			cout<<"*" <<" ";
		}
		cout<<endl;
	}
}

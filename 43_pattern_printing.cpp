//43. Print the following pattern:
// * * * *
// * * * *
// * * * *

#include<iostream>
using namespace std;
int main(){
	int m,n;
	//here m=4 and n=4
	cout<<"enter the number of rows\n";
	cin>>m;
	cout<<"enter the number of columns\n";
	cin>>n;
 for(int i=1;i<=m;i++){
 for(int j=1;j<=n;j++){
 	cout<<"*" <<" ";
 }
 cout<<endl;
 }
 return 0;
}

//44. Print the following pattern:
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"enter the number of rows\n";
	cin>>m;
	cout<<"enter the number of columns\n";
	cin>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cout<<j <<" ";
		}
		cout<<endl;
	}
	return 0;
}

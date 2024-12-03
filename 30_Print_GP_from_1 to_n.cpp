//30. Display this GP - 1,2,4,8,16,32,...upto n terms

#include<iostream>
using namespace std;
int main(){
	int n,i;
	cout<<"enter a number \n";
	cin>>n;
	for(i=1;i<=n;i*=2){ 
		cout<<i <<"," ;
	}
	return 0;
}

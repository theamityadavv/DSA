//39.  Q6. Print the sum of this series : 1 - 2 + 3 - 4 + 5 - 6… upto ‘n’.
#include<iostream>
using namespace std;
int main(){
	int i,n,sum=0;
	cout<<"enter a number\n";
	cin>>n;
	for(i=1;i<=n;i++){
		if(i%2==0){
			sum-=i;
		}
		else{
			sum+=i;
		}
	}
	cout<<sum;
	return 0;	
}

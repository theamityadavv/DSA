//37. Print sum of digits of a given number.
#include<iostream>
using namespace std;
int main(){
	int num,sum=0;
	cout<<"enter a number\n";
	cin>>num;
	num=abs(num);
	for( ;num>0;num/=10){
		sum=sum+num%10;
	}
	cout<<sum;
	return 0;
}

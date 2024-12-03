//34. Check if a number is prime or not.
#include<iostream>
using namespace std;
int main(){
	int  num;
	bool flag=true;
	cout<<"enter a number \n";
	cin>>num;
	if(num<=1){
		flag=false;
	}
	else{
		for(int i=2;i<=num/2;i++){
			if(num%i==0){
				flag=false;
				break;
			}
		}
	}
	if(flag){
		cout<<num <<" is a prime number \n";
	}
	else{
		cout<<num <<" is not a prime number \n";
	}
	return 0;
}

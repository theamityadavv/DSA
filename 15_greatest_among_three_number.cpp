//15.Take three positive integer input and print the greatest of them
#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"enter three number\n";
	cin>>num1 >>num2 >>num3; 
	if(num1>num2&&num1>>num3){
		cout<<num1 <<" is greatest \n";		
	}
	else if(num2>num1 && num2>num3){
		cout<<num2 <<" is greatest\n";
	}
	else{
		cout<<num3 <<" is greatest\n";
	}
	return 0;	
}

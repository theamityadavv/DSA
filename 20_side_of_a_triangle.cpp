//20. Take 3 number input and tell if they can be the sides of a triangle 

#include<iostream>
using namespace std;
int main(){
	double num1,num2,num3;
	cout<<"Enter Three number";
	cin>>num1 >>num2 >>num3;
	if(num1+num2>num3 && num2+num3>num1 && num3+num1>num2){
		cout<<"They can be the side of a triangle\n";
	}
	else{
		cout<<"They can not be the side of triangle\n";
	}
	return 0;	
}

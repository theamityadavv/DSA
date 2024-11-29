//Take positive integer input and tell if it is divisible by 3 and 5

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a  number \n";
	cin>>num;
	if(num<0){
		cout<<"Please enter a positive number \n";
	}
	else if(num%5==0 && num%3==0){
	cout<<num <<" is divisible by 5 and 3 \n";
	}
	else{
		cout<<"it is not divisible by 5 and 3 \n";
	}
	return 0;	
}

//8.take positive integer input and tell if it is even or not

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number \n";
	cin>>num;
	if(num<0){
		cout<<"Please enter a positive number \n";
	}
		else if(num==0){
			cout<<"The number is zero \n";
		}
	else{
		if(num%2==0){
			cout<<num <<" is a even number \n";
		}
		else{
			cout<<num <<" is a odd number \n";
		}
	}
	return 0;
}

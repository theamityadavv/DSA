//17. Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number\n";
	cin>>num;
	if((num%3==0||num%5==0)&& num%15!=0){
		cout<<num <<" is divisible by 5 or 3 but not divisible by 15 \n";
	}
	else{
		cout<<num <<" is not divisible by either 5 or 3 or is divisible by 15";
	}
	return 0;
}

//given an integer.print the absolute value of that integer
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number \n";
	cin>>num;
	if(num<0){
	num=-(num);
	}
	cout<<num <<" is the absolute value";
	}

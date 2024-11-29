//Take positive integer input and tell if it is a three digit number or not

#include<iostream>
using namespace std;
int main(){
int num;
cout<<"enter a number \n";
cin>>num;	
if(num<0){
	cout<<"Please enter a positive number";
}
else if(num>99&&num<1000){
	cout<<"It is a three digit number\n";
}
else{
	cout<<"it is not a three digit number\n";
}
	return 0;
}

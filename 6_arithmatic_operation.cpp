//6. Taking two number as input and performing arithmatic operation on them
#include<iostream>
using namespace std;
int main(){
	float num1,num2,add,sub,div,prod;
	cout<<"Enter the two number (such that num1 should be greather than num2) \n";
	cin>>num1 >>num2;
	cout<<"the sum of the two number is "<<num1+num2 <<endl;
	cout<<"the product of the two number is " <<num1*num2<<endl;
	cout<<"the quotient of the two number when " <<num1 <<" is " <<" divided by  " <<num2 <<" is " <<num1/num2 <<endl;
	cout<<num1 <<" - "<<num2 <<" is "<<num1-num2 <<endl;
	return 0;
	
}

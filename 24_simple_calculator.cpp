//24. write a program to create a calculator that performs basic arithmatic operatios (add,substract,multipl and divide) using switch case and fuunctions.
//the calculator should input two numbers and an operator from the user.


#include<iostream>
using namespace std;
//declare a function
//define 
// and use the function

double add(double num1,double num2){
	return num1+num2;
}

double sub(double num1,double num2){
	return num1-num2;
}

double pro(double num1,double num2){
	return num1*num2;
}

double div(double num1,double num2){
	if(num2==0){
		cout<<"Division by zero is not allowed\n";
		return 0;
	}
	else{	
	return num1/num2;
	}
		}

int main(){
	double num1,num2;
	char operations;
	cout<<"enter the two number\n";
	cin>>num1 >>num2;
	cout<<"enter the operator\n";
	cin>>operations;
	double result=0;
	switch(operations){
		
	case '+':
		result = add(num1,num2);
		break;
	case '-' :
		result = sub(num1,num2);
		break;
	case '*':
		result = pro(num1,num2);
		break;
	case '/':
		result = div(num1,num2);
		break;	
		default:
			cout<<"enter a valid operator\n";
			return 1;
		
	}
	cout<<result;
	return 0;	
}

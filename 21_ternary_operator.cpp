//21. Given the marks of the student. if the marks are greater than 33 print the result as pass otherwise fail wiithout using if-else statement
#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Enter your marks\n";
	cin>>marks;
	cout<<((marks>33)? "pass" : "Fail \n");
	return 0;
}

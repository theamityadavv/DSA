//Q18. Take input percentage of a student and print the Grade according to marks:
//1. 91-100 Excellent
//2. 81-90 Very Good
//3. 71-80 Good
//4. 61-70 Can do better
//5. 51-60 Average
//6. 40-50 Below Average
//7. <40 Fail

#include<iostream>
using namespace std;
int main(){
	int grade;
	cout<<"enter your Percentage\n";
	cin>>grade;
	if(grade>=91&& grade>=100){
		cout<<"Excellent\n";
	}
	else if(grade>=81&& grade>=90){
		cout<<"Very Good\n";
	}
	else if(grade>=71&& grade>=80){
		cout<<"Good\n";
	}
	else if(grade>=61&& grade>=70){
		cout<<"Can do better\n";
	}
	else if(grade>=51&& grade>=60){
		cout<<"Average\n";
	}
	else if(grade>=40 && grade>=50){
		cout<<"Below Average\n";
	}
	else if(grade<40){
		cout<<"Fail\n";
	}
	return 0;
}

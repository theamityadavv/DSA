//4. Calculating the percentage of 5 subjects
#include<iostream>
using namespace std;
int main(){
	float sub1,sub2,sub3,sub4,sub5,percentage;
	cout<<"Enter the Marks Obtained in each subjects(Out of 100)\n";
	cin>>sub1  >>sub2 >>sub3 >>sub4 >>sub5;
	percentage=(sub1+sub2+sub3+sub4+sub5)/5;
	cout<<"The percentage of marks obtained in the Five subjects are = " <<percentage;
	return 0;

}

//38. Print reverse of a given number.
#include<iostream>
using namespace std;
int main(){
	int num,revnum;
	cout<<"enter a number\n";
	cin>>num;
	for( ;num>0;num/=10){
		int remainder=num%10;
		revnum=revnum*10+remainder;
	}
	cout<<revnum;
	return 0;
}

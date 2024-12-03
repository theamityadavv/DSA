// 36. Count digits of a given number.
#include<iostream>
using namespace std;
int main(){
	int num,count=0;
	cout<<"enter a number\n";
	cin>>num;
	for(;num>0;num/=10){
		count++;
	}
	cout<<count;
	return 0;	
}

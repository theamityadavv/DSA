//40. Print the factorial of a given number n
#include<iostream>
using namespace std;
int main(){
		int i,num;
		long long fact=1;
		cout<<"enter a number\n";
		cin>>num;
		if(num<0){
			cout<<"the factorial of a negative number is not defined\n";
		}
		for(i=1;i<=num;i++){
			fact*=i;
		}
		cout<<fact;
    return 0;
}

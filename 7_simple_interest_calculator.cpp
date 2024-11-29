//7.Calculating the simple interest
#include<iostream>
using namespace std;
int main(){
	float p,r,t,si;
	cout<<"Enter thhe Principle amount \n";
	cin>>p;
	cout<<"enter the rate of interest \n";
	cin>>r;
	cout<<"enter the time \n";
	cin>>t;
	si=(p*r*t)/100; 
	cout<<"the simple interest is " <<si <<endl;
	
}

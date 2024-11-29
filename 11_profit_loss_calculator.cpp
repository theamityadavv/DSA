//11.If the cost price and the selling price of an item is input through the keyboard,
//write a program to determine whether the seller has made profit or incurred loss.
//also determine how much profit he made or loss he incurred.

#include<iostream>
using namespace std;
int main(){
int cp,sp,loss,profit;
cout<<"enter the cost price of item \n";
cin>>cp;
cout<<"enter the selling price\n";
cin>>sp;
if(sp>cp){
	cout<<"the seller has made profit of " <<sp-cp; 
}
else{
	cout<<"the seller has incurred loss of "<<cp-sp;	
}
	return 0;	
}

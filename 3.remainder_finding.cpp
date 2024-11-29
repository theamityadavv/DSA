//3. Take two integer input, x and y : x>y, and find the remainder when X is divided by Y

#include <iostream>
using namespace std;
int main(){
	int x,y,q,r;
	cout<<"Enter the Divident X \n";
	cin>>x;
	cout<<"Enter the Divisor \n";
	cin>>y;
	q=x/y;
	//finding the remainder when x is divided by y
	r=x-(y*q);
	cout<<"The remainder is  " <<r;
	return 0;	
}

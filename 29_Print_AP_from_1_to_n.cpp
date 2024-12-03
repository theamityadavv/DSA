//29. Display this A>P - 1,3,5,7,9... upto n terms
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number \n";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			cout<<i <<", ";
		}
	}
	return 0;
}

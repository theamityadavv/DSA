//49 Print the following pattern:
// A B C D 
// A B C D
// A B C D
// A B C D
#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=4;i++){
		char A=65;
		for(int j=1;j<=4;j++){
			cout<<A;
			A+=1;
		}
		cout<<endl;
	}
	
}

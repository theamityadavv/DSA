//48. Print the following pattern:
// 1
// 1 3
// 1 3 5
// 1 3 5 7

#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=4;i++){
	int v=1;
	for(int j=1;j<=i;j++){
	cout<<v <<" ";
	v+=2;
}
	cout<<endl;
      }
return 0;
}

//Write  a program to check wheather aa character is an albhabet or not
#include<iostream>
using namespace std;
int main(){
char character;
cout<<"enter a character \n";
cin>>character;
//if(character>='A' && character<= 'Z' || character>= 'a' && character<= 'z' )
if(character>=65 && character<=90 || character>=97 && character<=122)
{
	cout<<character <<" is an Alphabet";
	}
	else{
		cout<<character <<" is not a alphabet";
	}
return 0;
}

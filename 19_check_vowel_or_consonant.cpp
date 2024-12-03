//19.Write a program to check wheather a given character is a vowel or consonant

#include<iostream>
using namespace std;
int main(){
	char character;
	cout<<"Enter a Character\n";
	cin>>character;
	char lowercase=tolower(character);
	if(lowercase>='a'&&lowercase<='z'){
		if(lowercase=='a'||lowercase=='e'||lowercase=='i'||lowercase=='o'||lowercase=='u'){
		cout<<character <<" is a Vowel\n";
	}
	else{
		cout<<character <<" is a consonant\n";
	}
	}
	else{ 
		cout<<"enter a valid character\n";
	}
return 0;
}

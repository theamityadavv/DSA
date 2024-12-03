//22. Write a program to input week number(1-7) and print day of week name using switch csse'

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number between 1 to 7\n";
	cin>>num;
	switch(num){
	case 1:
			cout<<"Monday\n";
			break;
	
	case 2:
			cout<<"Tuesda\n";
			break;
	
	case 3:
			cout<<"wednesday\n";
			break;
	case 4:
			cout<<"Thursday\n";
			break;
	
	case 5:
		cout<<"Friday\n";
		break;
	
	case 6:
		cout<<"Saturday\n";
		break;		
	
	case 7:
		cout<<"sunday\n";
		break;
	
	default:
		cout<<"enter a valid number\n";	
		break;
	}
	return 0;
}

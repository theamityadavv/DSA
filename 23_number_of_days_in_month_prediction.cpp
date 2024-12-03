//23. Write a program to input month number and print total number of days in month using switch case

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter the month number\n";
	cin>>num;
	switch(num){
		case 1: case3: case 5: case 7: case 8 : case 10 : case 12:
			cout<<"Total number of days is 31  in this month\n";
			break;
			
			case 2:
				cout<<"Total number of days is 28/29 in this month \n";
				break;
				
		case 4: case 6: case 9: case 11:
			cout<<"Total number of the days is 30 in this month\n";
			break;
		default:
			cout<<"Enter a valid number\n";
			return 0;
	}
}

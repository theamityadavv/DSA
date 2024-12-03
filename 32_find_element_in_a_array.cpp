//32. Consider the situation where we want to search for an element in an array. To do this, use a loop to traverse the 
//array starting from the first index and compare the array elements with the given key.
#include<iostream>
using namespace std;
void findfunction(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			cout<<"key found at position "<<i+1 <<endl;
			break;
		}
	}
}
int main(){
	int arr[]={3,34,56,333,55,66,223,45,35,3344,34454,35,1,444,0,2,33};
	int size=17;
	int key=1;
	findfunction(arr,size,key);
	return 0;
}

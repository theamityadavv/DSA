#include<bits/stdc++.h>
using namespace std;

void pattern1(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<"*";
            }
        cout<<endl;
        }
    }

void pattern2(int n) {
        for(int i = 1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }

void pattern3(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            cout<<endl;
        }
    }
    
void pattern4(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<i;
            }
            cout<<endl;
        }
    }


void pattern5(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }

void pattern6(int n) {
        for(int i=1;i<=n;i++ ){
            for(int j=1;j<=n-i+1;j++){
                cout<<j;
            }
        }
    }
void pattern10(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern11(int n){
    for(int i=1;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern12(int n) {
for(int i=1;i<=2*n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
        
    }
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    cout<<endl;
}
    };
    int main(){
        int n=5;
        pattern12(n);
        
        return 0;
    }
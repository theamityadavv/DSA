#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
    cout<<endl;
    }
}
void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
    cout<<endl;
    }
}
void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
void pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<j;
        }
    cout<<endl;
    }
}
void pattern7(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
void pattern8(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*n-(2*i-1));j++){
            cout<<"*";
        }
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
    cout<<endl;
    }
}
void pattern9(int n){
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
        }
          
    //reverse
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*n-(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
void pattern10(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;     
    }
    // another half
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern11(int n){
    for(int i=1;i<=n;i++){
        int start= i%2;
        for(int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
        }
    cout<<endl;
    }
}
void pattern12(int n){
    for(int i=1;i<=n;i++){
    // print first part
      for(int j=1;j<=i;j++){
        cout<<j;
      }
      // print second part
      for(int j=1;j<=2*n-2*i;j++){
        cout<<" ";
      } 
      // print third part
      for(int j=i;j>=1;j--){
        cout<<j;
      }
      cout<<endl;
    }
}
void pattern13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num <<" ";
            num+=1;
        }
        cout<<endl;
    }
}
void pattern14(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+i;j++){
            cout<<j <<" ";
            
        }
        
        cout<<endl;
    }
}
void pattern15(int n){
    for(int i=1;i<=n;i++){
        for(char j='A';j<='A'+(n-i);j++){
            cout<<j <<" ";
            
        }
        
        cout<<endl;
    }
}
void pattern16(int n){
    char ch ='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch <<" ";
        }
        ch+=1;        
        cout<<endl;
    }
}
void pattern17(int n){
    for(int i=1;i<=n;i++){
        char ch='A';
        // spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        // pattern
        for(int j=1;j<=2*i-1;j++){
            cout<<ch;
            if(j<i){
                ch++;
            }
            else{
                ch--;
            }
        }
        // spaces
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern18(int n){
    for(int i=0;i<n;i++){
        char el='A'+ n-1;
        for(char ch=el-i;ch<=el;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern19(int n){
    for(int i=0;i<n;i++){
        char el='A'+ n-1;
        for(char ch=el-i;ch<=el;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}


int main(){
        int n=5;
        // pattern1(n);
        // pattern2(n);
        // pattern3(n);
        // pattern4(n);
        // pattern5(n);
        // pattern6(n);
        // pattern7(n);
        // pattern8(n);
        // pattern9(n);
        // pattern10(n);
        // pattern11(n);
        // pattern12(n);
        // pattern13(n);
        // pattern14(n);
        // pattern15(n);
        // pattern16(n);
        // pattern17(n);
        // pattern18(n);
        pattern19(n);

        return 0;
    }
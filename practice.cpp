// MASTER FOR LOOP
// STAR PATTERNS

#include<iostream>
#include<vector>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern7(int n){
    int start = 1;
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            start = 1;
        }else {start = 0;}
        for(int j=0; j<i+1; j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}

void pattern8(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        char ch='A';
        for(int j=0; j<i+1; j++){
            cout<<ch;
            ch++;
        }
        ch = ch-2;
        for(int j=0; j<i; j++){
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }
}

void pattern9(int n){
    for(int i=0; i<n; i++){
        char ch='A';
        for(int j=0; j<n-i-1; j++){
            ch++;
        }
        for(int j=0; j<i+1; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>> n;
    pattern9(n);
    return 0;
}
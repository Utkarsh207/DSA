#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1) return 1;
    return n * fact(n-1);
}
int main(){
    int n = -1; 
    if(n<0){
        cout<<"Cannot Calculate the -ve factorial";
            return 0;
        
    }
    cout<<fact(n);
}

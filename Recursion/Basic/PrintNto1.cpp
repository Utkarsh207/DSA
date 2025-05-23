#include<iostream>
using namespace std;
void Print(int n){
    // base case
    if(n==1){
        cout<<1;
        return;
    }
    cout<<n<<endl;
    Print(n-1);
}
int main(){
    int n;
    n = 5;
    Print(n);
}

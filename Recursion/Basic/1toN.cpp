#include<iostream>
using namespace std;
void Print (int n , int m){
    // Base Case
    if(n==m){
        cout<<n;
        return;
    }
    cout<<n<<endl;
    Print(n+1 , m);
}
int main(){
    int n  =  1;
    int m = 10;
    Print(n , m);

}
// One Argument 
#include<iostream>
using namespace std;
void Print(int n){
    // Base Case
    if(n==1){
        cout<<n<<endl;
        return;
    }
    Print(n-1);
    cout<<n<<endl;
}
int main(){
    int n  =  5;
    Print(n);
}

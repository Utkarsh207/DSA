#include<iostream>
using namespace std; 
void Print(int n){
    // Base Case
    if(n==2){
        cout<<n;
        return;
    }
    cout<<n<<endl;
    Print(n-2);

}
int main(){
    int n = 8;
    Print(n);
}

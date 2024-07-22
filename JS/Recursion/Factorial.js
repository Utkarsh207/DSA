function factorial(n){
    // Base Condition
    if(n==0 || n==1){
        return 1;
    }

    // logic
     return n*factorial(n-1);
    // recursive call
}
console.log(factorial(0));
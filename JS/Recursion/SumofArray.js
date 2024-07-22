function Sum(arr,sI){
    // Base condition
    if(sI>=arr.length){
        return 0;
    }
    // logic
    return arr[sI] + Sum(arr,sI+1);
}

let arr = [1,2,3,4,5];
console.log(Sum(arr,0));

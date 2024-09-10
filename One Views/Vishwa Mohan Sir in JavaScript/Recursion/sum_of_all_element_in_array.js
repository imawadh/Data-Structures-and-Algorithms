function sum(arr,n)
{
    if(n===arr.length) return 0
    
    return arr[n]+sum(arr,n+1)
}
console.log(sum([1,2,3,4,5],0));
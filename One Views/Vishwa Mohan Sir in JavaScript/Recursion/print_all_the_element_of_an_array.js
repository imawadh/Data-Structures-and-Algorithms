function print(arr,s)
{
    // Base Condition 
    if(s>=arr.length){ // think why not s===arr.length
        return
    }

    // Logic
    console.log(arr[s])

    // Recursive Call
    print(arr,s+1)
}

let arr = [1,2,3,4,5,6,9]
print(arr,3);

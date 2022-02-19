function depth(arr) 
{
    var count=1;
    for(var i=0;i<arr.length;i++)
    {
      if (Array.isArray(arr[i])) 
      {
        count+=depth(arr[i]) ;
      }
    }
    return count;
}

console.log("The depth is :",depth([1,2,3,4]));
console.log("The depth is :",depth([1,[2, 3, 4]]));
console.log("The depth is :",depth([1, [2, [3, 4]]])); 
console.log("The depth is :",depth([1, [2, [3, [4]]]])); 

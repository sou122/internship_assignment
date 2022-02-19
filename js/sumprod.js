function sum(...args)
{
    let sum=0;
    for(let i=0;i<args.length;i++)
    {
        sum+=args[i];
    }
    console.log(sum);
    while (sum.toString().length>1) 
    {
        sum=sum.toString().split("");
        sum=sum.reduce((a,b)=> 
        {
            return a*b;
        });
    }
    return sum;
}

console.log(sum(1,2,3,4,5,6,7,8));






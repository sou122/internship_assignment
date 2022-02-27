function convertarr(args)
{
    let a=args.split(" ");
    for(let i=0;i<a.length;i++)
    {
        if(a[i]==="function")
        {
            let b=a.join(" ");
            let c=b.split("");
            let index=c.indexOf(")");
            let ind=c.indexOf("(");
            c.splice(index+1,0,"=>");
            c.splice(0,ind);
            console.log(c.join(""));
        }
    }
}

convertarr("function sum(a,b) { return a + b; };");

function convertfunc(args)
{
    let a=args.split(" ");
    for(let i=0;i<a.length;i++)
    {
        if(a[i]==="=>")
        {
            let b=args.replace("=>"," { return ");
            let c=b.split("");
            let index = b.indexOf("(");
            c.splice(index,0,"function");
            let d=c.join("");
            let e=d.split("");
            e.push(" }");
            return e.join("");
        }
    }
}

console.log(convertfunc("(val) => 'Hello ' + val;"));

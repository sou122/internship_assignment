
function loneone(n)
{
    n1=n.toString();
    var count=0;
    for(var i=0;i<n1.length;i++)
    {
        if(n1[i]==1)
        {
            if(n1[i]!== n1[i-1] && n1[i]!== n1[i+1])
                count++;
        }
    }
    console.log(count);
}

loneone(101);
loneone(1191);
loneone(1110101);
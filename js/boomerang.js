
function boomerang(b)
{
    var count=0;
    for(var i=0;i<b.length;i++)
    {
        if(b[i]==b[i+2] && b[i]!==b[i+1])
        {
            count++;
            console.log(`[${b[i]},${b[i+1]},${b[i+2]}]`);
        }
    }
    console.log(`${count} boomerangs in this sequence.`);
}

boomerang([3, 7, 3, 2, 1, 5, 1, 2, 2, -2, 2]);
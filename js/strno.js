const reg = /\d/;

  function no(arr)
  {
      for(var i=0;i<arr.length;i++)
      {
          if(reg.test(arr[i]))
            console.log(`[${arr[i]}]`);
      }
  }
  
  no(["1a", "a", "2b", "b"]); 
  no(["abc", "ab10c", "a10bc", "bcd"]);
  no(["this is a test", "test1"]);










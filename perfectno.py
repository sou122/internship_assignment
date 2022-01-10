# perfect number

num=int(input("Enter the number : "))
for n in range(1,num+1):
    sum=0
    for i in range(1,n):
      if(n%i==0):
        sum=sum+i
    if(n==sum):
      print(n)
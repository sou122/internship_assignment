# count the no of occurence

def count(no):
    c={}
    if(no.isdigit()):
        for i in no:
        #print(i)
            c[i]=c.get(i,0)+1
        print(c)
    else:
        print("Not a number")
no=input("Enter the number : ")
count(no)
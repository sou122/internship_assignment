import sys

print("1.Insert\n2.Delete\n3.Search\n4.Display\n5.Quit\n")
d={}

while(True):
    ch=int(input("Enter your choice : "))

    if(ch==1):
        print("How many elements : ")
        n=int(input())
        for i in range(n):
            print("Enter book id",end=" ")
            k=input()
            print("Enter book name",end=" ")
            v=input()
            d.update({k:v})
        print(d)
    elif(ch==5):
        sys.exit()
    elif(ch==4):
        print(d)
    elif(ch==2):
        id = input("Enter id u want to delete:")
        del d[id]
        print(d)
    elif(ch==3):
        s = input("Enter the ID to search:")
        if(d.get(s)):
            print("Key:"+s+"\nValue:"+d.get(s))
        else:
            print("No book exists")
        

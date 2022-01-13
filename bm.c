#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30

struct node
{
    int bid;
    char data[N];
    struct node *link;
}*start;

void create();
void disp();
void ser();
void add();

void main()
{
    int ch,n,i,a,pos;
    char m[20];
    start=NULL;
    do{
        printf("\n1.Create");
        printf("\n2.Display Books");
        printf("\n3.Search Book");
        printf("\n4.Add Book");
        printf("\n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1 :
                    printf("\nHow many book you want to add : ");
                    scanf("%d",&n);
                    for(i=0;i<n;i++)
                    {
                        create();
                    }
                    break;
            case 2:
                    disp();
                    break;

            case 3:
                    ser();
                    break;
            case 4:
                    printf("\nHow many book you want to add : ");
                    scanf("%d",&n);
                    for(i=0;i<n;i++)
                    {
                        add();
                    }
                    break;
        }
    }while(ch!=5);
}
void create()
{
    struct node *q,*tmp;
    int bid;
    char data[50];
    tmp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the book id : ");
    scanf("%d",&bid);
    printf("\nEnter book name : ");
    scanf("%s",data);
    strcpy(tmp->data,data);
    tmp->link=NULL;
    if(start==NULL)
    {
        start=tmp;
    }
    else
    {
        q=start;
        while(q->link!=NULL)
        q=q->link;
        q->link=tmp;
    }
    printf("Book Added");
}
void disp()
{
    struct node *q;
    if(start==NULL)
    {
            printf("\nEmpty");
    }
    else
    {
        printf("Book Names : ");
        q=start;
        while(q!=NULL)
        {
            printf("\t%d %s\t",q->bid,q->data);
            q=q->link;
        }
    }
}
void ser()
{
    struct node *q,*tmp;
    char data[20];
    q=start;
    printf("\nEnter book name to search : ");
    scanf("%s",data);
    while(q!=NULL)
    {
        if(strcmp(q->data,data) == 0)
        {
            printf("\n%s Is Available",data);
            break;
        }
        else
        {
            q=q->link;
        }
    }
    if(q==NULL)
    {
        printf("\n%s is Not Available",data);
    }
}

void add()
{
    struct node *q,*tmp;
    char data[50];
    int bid;
    tmp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the book id : ");
    scanf("%d",&bid);
    printf("\nEnter book name : ");
    scanf("%s",data);
    strcpy(tmp->data,data);
    tmp->link=NULL;
    if(start==NULL)
    {
        start=tmp;
    }
    else
    {
        q=start;
        while(q->link!=NULL)
        q=q->link;
        q->link=tmp;
    }
    printf("New Book Added");
}

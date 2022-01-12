#include <stdio.h>

int pali(char s[],int n)
{
    int i,j,flag=0;
    for(i = 0, j=n-1; i< n/2, j>=n/2; i++, j--)
    {
         if(s[i]!=s[j])
         {
            flag = 1;
            break;
         }
    }
    if (flag == 1)
    return 0;
    else
    return 1;
}

int main()
{
    char s[100];
    printf("\nPlease Enter any String :  ");
  	gets(s);
    int n = strlen(s);
    if (pali(s,n))
        printf("It is palindrome");
    else
        printf("It is not Palindrome");
    return 0;
}
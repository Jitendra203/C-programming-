include<stdio.h>
#include<string.h>
void main()
{
char a[20];
printf("enter a word");
gets(a);
int len=strlen(a)-1;
for(int i=0,j=len;i<=j;i++,j--)
{
if(a[i]!=a[j])
{
printf("is not palindrome");
}
}
printf("is palindrome");
  }

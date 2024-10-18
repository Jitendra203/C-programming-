include<stdio.h>
#include<string.h>
void main()
{
int i,len, count;
char a[200];
printf("enter a sentence:");
gets(a);
len=strlen(a);
count=0;
for(i=0;i<len;i++)
{
if(a[i]=' '&&a[i+1]!=' ')
count=count+1;
}
printf("the no of words are %d",count+1);
}

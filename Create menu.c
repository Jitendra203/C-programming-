#include <stdio.h>
#include<conio.h>
void circle();
void rect(int);
void triangle(int,int,int);
void circle()
{
  int r;
  printf("enter the radius:");
  scanf("%d",&r);
  float res=3.14*r*r;
  printf("\n the area of the circle is %f",res);
}
void rect(int len)
{
  int breadth;
  printf("enter the breadth value:");
  scanf("%d",& breadth);
  printf("\n the area of the rectangle is %d %d",len*breadth);
}
void triangle(int a,int b,int c)
{
  printf("\n the parimeter of the triangle is %d %d %d",a+b+c);
}  
void main()
{
   int a;
   printf("\n1.circle \n2.rectangle \n3.triangle \n");
   printf("enter your choice:");
   scanf("%d",&a);
   switch(a)
   {
     case 1: circle();
            break;
     case 2:rect(20);
            break;
     case 3:triangle(10,20,30);
            break;
     default:printf("invalid your choice");
    } 
 }

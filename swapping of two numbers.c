#include<stdio.h>
int main()
{

int a,b;
void swap(int *a,int*b);
printf ("Enter the Two numbers:" );
scanf("%d%d",&a,&b);
printf( "\n values before swaping is a=%d, b=%d",a,b);
swap (&a,&b);
printf("\n values after swaping is a=%d, b=%d",a,b);
return 0;
}
void swap (int *a,int *b)
{

*a-*a+*b;
*b=*a-*b;
a=*a -*b; 
}

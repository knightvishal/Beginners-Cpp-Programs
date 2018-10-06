//Simple Intrest Proram//
#include<stdio.h>
#include<conio.h>
void main()
{      //here p is principle, n is no. of yr. and r is rate of intrest//
       int p,n;
       float r,si;
       clrscr();
       printf("provide value for p and n");
       scanf("%d%d",&p,&n);
       printf("provide rate of intrest");
       scanf("%f",&r);
       si=p*n*r/100;
       printf("%f`",si);
       getch();
}

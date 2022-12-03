#include"stdio.h"
#include"conio.h"
void main()
{
int  a,b,c;
clrscr();
printf("guess which no. i am thinking in between(0 to 9)");
printf("\nyou have three chance to guess");
printf("\nEnter first no.=");
scanf("%d",&a);
printf("\nEnter second no.");
scanf("%d",&b);
printf("\nEnter third no.");
scanf("%d",&c);
if (a>9||b>9||c>9)
{
printf("\n No. is out of range");
}
else if (b==a/c)
{
printf("\nyou are right. I am thinking %d",b);
}
else if (a==b/c)
{
printf("\nyou are right. i am thinking %d",a);
}
else if (c==a/b)
{
printf("\nyou are right. i am thinking %d",c);
}
else
{
printf("Alas! I am not thinking this no.");
}
getch();
}

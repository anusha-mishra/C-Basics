# include<conio.h>
# include<stdio.h>
void main()
{
int num;
clrscr();
printf("enter the days");
scanf("%d",&num);
if(num%4==0)
printf("leap year");
if(num%4!=0)
printf("non leap year");
getch();
}

#include"stdio.h"
#include"conio.h"
int main()
{
int choice;
double a,b,add,sub,mult,div,perc;
printf(" 1. addition\n 2. subtracton\n 3. multiplication \n 4. division \n 5. percentage");
printf("\n please enter you choice as shown above : ");
scanf("%d",&choice);
clrscr();
switch(choice)
{
case 1:
printf("please enter numbers you want to operate in : ");
scanf("%lf%lf",&a,&b);
printf("addition is : %lf + %lf = %lf",a,b,a+b);
getch();
clrscr();

case 2:
printf("please enter numbers you want to operate in : ");
scanf("%lf%lf",&a,&b);
printf("subtraction is : %lf - %lf = %lf",a,b,a-b);
getch();
clrscr();

case 3:
printf("please enter numbers you want to operate in : ");
scanf("%lf%lf",&a,&b);
printf("multiplication is : %lf * %lf = %lf",a,b,a*b);
getch();
clrscr();

case 4:
printf("please enter numbers you want to operate in : ");
scanf("%lf%lf",&a,&b);
printf("division is : %lf / %lf = %lf",a,b,a/b);
getch();
clrscr();

case 5:
int c,d;
printf("please enter numbers you want to operate in : ");
scanf("%d%d",&c,&d);
printf("percentage is: %d%",c,d,c%d);
getch();
clrscr();

}
return 0;
}
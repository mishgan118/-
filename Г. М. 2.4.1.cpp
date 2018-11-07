//Автор: Ганин Михаил (2.4.1)
#include <stdio.h>
#include <conio.h>
main(){
       int a,b,sum;
       sum=0;
       printf("Эта программа определяет верно ли,что сумма введеных цифр равна 10\n");
       do {printf("Введите натуральное число:\n");
       scanf("%d",&a);}
       while(a<0);
       while(a>0)
       {
       b=a%10;
       sum+=b;
       a/=10;
       }
       if(sum==10)printf("Да");
       else printf ("Нет");
       getch();
       }

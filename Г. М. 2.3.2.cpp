//Автор: Ганин Михаил (2.3.2)
#include <stdio.h>
#include <conio.h>
main(){
       int a, rem=0;
       printf("Введите целое число и программа определит верно ли,что все его цифры четные\n");
       scanf("%d",&a);
       for(;a>0;a/=10) rem+=a%2;
       if(rem==0) printf("Да");
       else printf("Нет");
       getch();
       }

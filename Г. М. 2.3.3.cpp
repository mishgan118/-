//Автор: Ганин Михаил (2.3.3)
#include <stdio.h>
#include <conio.h>
main(){
       int a,b,rem;
       printf("Введите целое число и программа определит,верно ли что все его цифры введены в порядке возрастания\n");
       scanf("%d",&a);
       rem=a%10;
       b=1;
       while(b>0)
       {
          b=a%10;
          if (b>rem) break;
          rem=b;
          a/=10;
       }
       if(b>rem) printf("Нет");
       else printf("Да");
       getch();
       }  
        
       

//Автор: Ганин Михаил (2.3.1)
#include <stdio.h>
#include <conio.h>
main()
 {
      int a,nine=0;
      printf("Введите целое число и программа определит,верно ли,что в нем ровно одна цифра 9\n");
      scanf("%d",&a);
      for(;a>0;a/=10) if (a%10==9) nine+=1;
      if (nine==1) printf("Да");
      else printf("Нет");
      getch();
      }

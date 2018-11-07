//Автор: Ганин Михаил (2.2.3)
#include <stdio.h>
#include <conio.h>
main()
 {
      int a,b,square,sum=0;
      printf("Введите два целых числа a и b(a<=b) и программа выведет сумму квадратов всех чисел от a до b\n");
      scanf("%d%d",&a,&b);
      for(;a<=b;a++)
      {
                    square=a*a;
                    sum+=square;
                    }
                    printf("Сумма квадратов %d\n",sum);
          getch();
      }

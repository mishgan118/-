//Автор: Ганин Михаил (2.2.2)
#include <stdio.h>
#include <conio.h>
main()
 {
      int a,b,square;
      printf("Введите два целых числа a и b(a<=b)и программа выведет квадраты всех чисел от a до b\n");
      scanf("%d%d",&a,&b);
      for(;a<=b;a++)
      {
                    square=a*a;
                    printf("%d*%d=%d\n",a,a,square);
                    }
      getch();
      }

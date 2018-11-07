//Автор: Ганин Михаил (2.2.1)
#include <stdio.h>
#include <conio.h>
main()
 {
     int A,crt=1,squareA,cubeA;
     printf("Введите натуральное число и программы выведет квадрты и кубы всех чисел от 1 до вашего числа\n");
     scanf("%d",&A);
     for (;crt<=A;crt++)
     {
         squareA=crt*crt;
         cubeA=crt*crt*crt;
         printf("%d: %d %d\n",crt,squareA,cubeA);
         }
     getch();
     }
     

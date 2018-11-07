//Автор: Ганин Михаил (3.1.2)
#include <stdio.h>
#include <conio.h>
int istherenum(int num1, int digit) {
    for (;num1>0;num1/=10) {
        if (digit==num1%10) return true;
        return false;
        }
    }
main () {
     int num1,num2,digit;
     printf("Введите три числа и программа выведет все числа в интервале от первого числа до до второго, содержащие третью цифру\n");
     scanf("%d%d%d", &num1,&num2,&digit);
     for(;num1<=num2;num1++) if (istherenum(num1,digit)) printf("%d\n",num1);
     getch();
     }

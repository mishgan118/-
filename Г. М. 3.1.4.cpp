//Автор: Ганин Михаил (3.1.4)
#include <stdio.h>
#include <conio.h>
   void proc1(int a,int b,int h) {
   	for(;a<=b;a+=h) printf ("%d ",a);
   }
   void proc2 (int a, int b,int h) {
   	for(;a<=b;a+=h) printf("%d ",a*a);
   }
   void proc3 (int a,int b, int h) {
   	for (;a<=b;a+=h) printf("%d ",a*a*a);
   }
main()
{
int a, b, h;
printf("Введите два целых числа и шаг:\n");
scanf("%d%d%d",&a,&b,&h);
proc1(a,b,h);
printf("\n\n");
proc2(a,b,h);
printf("\n\n");	
proc3(a,b,h);
 getch();
}


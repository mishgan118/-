//Автор: Ганин Михаил (2.3.4)
#include <stdio.h>
#include <conio.h>
main() {
	int a, reversea, razryad, A;
	printf("Введите целое число и программа перевернет его\n");
	scanf("%d", &a);
	A = a;
	for(razryad=1; A>10; A/=10,razryad*=10); 
	for(reversea=0;a>0;a/=10, razryad/=10) reversea += a%10*razryad;
	printf("%d", reversea);
	getch();
}

//Автор: Ганин Михаил (2.4.2)
#include <stdio.h>
#include <conio.h>
main() {
	int a, lasta, r1=0, r2=0, r3=0, r4=0, r5=0, r6=0, r7=0, r8=0, r9=0, r0=0;
	do{
		printf("Введите натуральное число и программа определит какие цифры встречаются несколько раз\n");
		scanf("%d", &a);
	}
	while(a<0);
	for(;a>0;a/=10){
		lasta=a%10;
		 if (lasta == 0) r0++;
		 if (lasta == 1) r1++;
	     if (lasta == 2) r2++;
		 if (lasta == 3) r3++;
		 if (lasta == 4) r4++;
		 if (lasta == 5) r5++;
		 if (lasta == 6) r6++;
		 if (lasta == 7) r7++;
		 if (lasta == 8) r8++;
		 if (lasta == 9) r9++;
	};
	if (r1<=1 && r2<=1 && r3<=1 && r4<=1 && r5<=1 && r6<=1 && r7<=1 && r8<=1 && r9<=1 && r0<=1) printf("Нет повторов.");
	else {
		printf("Повторяются:");
		if (r1 > 1) printf("1,");
		if (r2 > 1) printf("2,");
		if (r3 > 1) printf("3,");
		if (r4 > 1) printf("4,");
		if (r5 > 1) printf("5,");
		if (r6 > 1) printf("6,");
		if (r7 > 1) printf("7,");
		if (r8 > 1) printf("8,");
		if (r9 > 1) printf("9,");
		if (r0 > 1) printf("0,");
		printf("\b \b");
	}
	getch();
}



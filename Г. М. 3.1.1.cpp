//�����: ����� ������ (3.1.1)
#include <stdio.h>
#include <conio.h>
int reverseint(int a) {
    int reversea, razryad, A;
    A=a;
	for(razryad=1; A>10; A/=10,razryad*=10); 
	for(reversea=0;a>0;a/=10, razryad/=10) reversea += a%10*razryad;
	return reversea;
}
    
main(){
    int a, b;
	printf("������� 2 ����� ����� � ��������� ������� ��� ����� �� a �� b � ���� � ������������\n");
	scanf("%d%d", &a,&b);
	for(; a<=b;a++)
	printf ("%d %d\n", a, reverseint(a));
	getch();
}
      

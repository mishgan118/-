//�����: ����� ������ (3.1.3)
#include <stdio.h>
#include <conio.h>
int ischetnoe (int num1) {
    for(;num1>0;num1/=10) if(num1%2==1) return false;
    return true;
}
main() {
       int num1,num2;
       printf("������� ��� ����� ����� � ��������� ������� ��� ������ ����� � ��������� �� ������� �� ������� �����\n");
       scanf("%d%d",&num1,&num2);
       for (;num1<=num2;num1++) if(ischetnoe(num1)) printf("%d\n",num1);
       getch();
       }

//�����: ����� ������ (2.3.2)
#include <stdio.h>
#include <conio.h>
main(){
       int a, rem=0;
       printf("������� ����� ����� � ��������� ��������� ����� ��,��� ��� ��� ����� ������\n");
       scanf("%d",&a);
       for(;a>0;a/=10) rem+=a%2;
       if(rem==0) printf("��");
       else printf("���");
       getch();
       }

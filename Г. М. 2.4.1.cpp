//�����: ����� ������ (2.4.1)
#include <stdio.h>
#include <conio.h>
main(){
       int a,b,sum;
       sum=0;
       printf("��� ��������� ���������� ����� ��,��� ����� �������� ���� ����� 10\n");
       do {printf("������� ����������� �����:\n");
       scanf("%d",&a);}
       while(a<0);
       while(a>0)
       {
       b=a%10;
       sum+=b;
       a/=10;
       }
       if(sum==10)printf("��");
       else printf ("���");
       getch();
       }

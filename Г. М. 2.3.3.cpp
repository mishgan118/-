//�����: ����� ������ (2.3.3)
#include <stdio.h>
#include <conio.h>
main(){
       int a,b,rem;
       printf("������� ����� ����� � ��������� ���������,����� �� ��� ��� ��� ����� ������� � ������� �����������\n");
       scanf("%d",&a);
       rem=a%10;
       b=1;
       while(b>0)
       {
          b=a%10;
          if (b>rem) break;
          rem=b;
          a/=10;
       }
       if(b>rem) printf("���");
       else printf("��");
       getch();
       }  
        
       

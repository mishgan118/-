//�����: ����� ������ (2.2.3)
#include <stdio.h>
#include <conio.h>
main()
 {
      int a,b,square,sum=0;
      printf("������� ��� ����� ����� a � b(a<=b) � ��������� ������� ����� ��������� ���� ����� �� a �� b\n");
      scanf("%d%d",&a,&b);
      for(;a<=b;a++)
      {
                    square=a*a;
                    sum+=square;
                    }
                    printf("����� ��������� %d\n",sum);
          getch();
      }

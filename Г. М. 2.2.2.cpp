//�����: ����� ������ (2.2.2)
#include <stdio.h>
#include <conio.h>
main()
 {
      int a,b,square;
      printf("������� ��� ����� ����� a � b(a<=b)� ��������� ������� �������� ���� ����� �� a �� b\n");
      scanf("%d%d",&a,&b);
      for(;a<=b;a++)
      {
                    square=a*a;
                    printf("%d*%d=%d\n",a,a,square);
                    }
      getch();
      }

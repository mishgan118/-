//�����: ����� ������ (2.2.1)
#include <stdio.h>
#include <conio.h>
main()
 {
     int A,crt=1,squareA,cubeA;
     printf("������� ����������� ����� � ��������� ������� ������� � ���� ���� ����� �� 1 �� ������ �����\n");
     scanf("%d",&A);
     for (;crt<=A;crt++)
     {
         squareA=crt*crt;
         cubeA=crt*crt*crt;
         printf("%d: %d %d\n",crt,squareA,cubeA);
         }
     getch();
     }
     

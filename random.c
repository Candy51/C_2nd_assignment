#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int odd(int n);
int even(int n);

int main(void)
{
	int n, i = 1;

	srand((unsigned)time(NULL));
	printf("1~6���� �������� ���� �̽��ϴ�.(Ȧ��:gamer,¦��:computer)\n");
	n = 1 + rand() % 6;
	if (n % 2 == 0)
		even(n);
	else
		odd(n);
}

int even(int n)
{
	int i, cnum, gnum;

	printf("¦���̸� computer�� ���� �̽��ϴ�.\n");
	for (i = 1, cnum = 1; cnum <= 30; i++)
	{
		do
		{
			printf("computer:%d", cnum);
			gnum = (cnum + 1) + rand() % 3;
			printf("gamer:%d\n", gnum);
			cnum = (gnum + 1) + rand() % 3;
			
			
		} while (gnum <= 30&&cnum<=30);
		if (gnum == 29)
		{
			printf("computer:%d\n", 30);
			printf("gamer�� �̰���ϴ�.");
		}
		if (cnum == 29)
		{
			printf("gamer:%d\n", 30);
			printf("computer�� �̰���ϴ�.\n");
		}
		
                
		
		
		if (cnum == 30)
			printf("gamer�� �̰���ϴ�.\n");
		if (gnum == 30)
			printf("computer�� �̰���ϴ�.\n");
		
	}
	return 0;
}



int odd(int n)
{
	int i, cnum, gnum;
	printf("Ȧ���̸� gamer�� ���� �̽��ϴ�.\n");
	for (i = 1, gnum = 1;gnum <= 30; i++)
	{
	      
		
			printf("gamer:%d", gnum);
			cnum = (gnum + 1) + rand() % 3;
			printf("computer:%d\n", cnum);
			gnum = (cnum + 1) + rand() % 3;
		if (gnum == 29)
		{
			printf("computer:%d\n", 30);
			printf("gamer�� �̰���ϴ�.");
		}
		if (cnum == 29)
		{
			printf("gamer:%d\n", 30);
			printf("computer�� �̰���ϴ�.\n");
		}
               

		if (cnum == 30)
			printf("gamer�� �̰���ϴ�.\n");
		if (gnum == 30)
			printf("computer�� �̰���ϴ�\n");
	

	}

	return 0;
}
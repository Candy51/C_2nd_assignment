#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int odd(int n);
int even(int n);

int main(void)
{
	int n, i = 1;

	srand((unsigned)time(NULL));
	printf("1~6까지 무작위로 수를 뽑습니다.(홀수:gamer,짝수:computer)\n");
	n = 1 + rand() % 6;
	if (n % 2 == 0)
		even(n);
	else
		odd(n);
}

int even(int n)
{
	int i, cnum, gnum;

	printf("짝수이며 computer가 먼저 뽑습니다.\n");
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
			printf("gamer가 이겼습니다.");
		}
		if (cnum == 29)
		{
			printf("gamer:%d\n", 30);
			printf("computer가 이겼습니다.\n");
		}
		
                
		
		
		if (cnum == 30)
			printf("gamer가 이겼습니다.\n");
		if (gnum == 30)
			printf("computer가 이겼습니다.\n");
		
	}
	return 0;
}



int odd(int n)
{
	int i, cnum, gnum;
	printf("홀수이며 gamer가 먼저 뽑습니다.\n");
	for (i = 1, gnum = 1;gnum <= 30; i++)
	{
	      
		
			printf("gamer:%d", gnum);
			cnum = (gnum + 1) + rand() % 3;
			printf("computer:%d\n", cnum);
			gnum = (cnum + 1) + rand() % 3;
		if (gnum == 29)
		{
			printf("computer:%d\n", 30);
			printf("gamer가 이겼습니다.");
		}
		if (cnum == 29)
		{
			printf("gamer:%d\n", 30);
			printf("computer가 이겼습니다.\n");
		}
               

		if (cnum == 30)
			printf("gamer가 이겼습니다.\n");
		if (gnum == 30)
			printf("computer가 이겼습니다\n");
	

	}

	return 0;
}
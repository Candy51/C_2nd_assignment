#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int odd(int n);
int even(int n);

int main(void)
{
	int n, i = 1;
	char gamer, computer;
	//값이 그대로 유지됨
	srand((unsigned)time(NULL));
	printf("1~6까지 무작위로 수를 뽑습니다.(홀수:gamer,짝수:computer)\n");
	n = 1 + rand() % 6;
	if(n%2==0)
	   even(n);
	else
	  odd(n);
}

int even(int n)
{
	int i,cnum,gnum;
	
	printf("짝수이며 computer가 먼저 뽑습니다.\n");
    cnum = 1 + rand() % 30;
	gnum = 1 + rand() % 30;
	
	for (i = 1; cnum <= 30 && gnum <= 30; i++)
	{
		cnum = (gnum + 1) + rand() % 3;
		printf("computer:%2d", cnum);
		gnum = (cnum + 1) + rand() % 3;
		printf("  gamer:%2d\n\n", gnum);

		if (cnum == 30)
		    printf("gamer가 이겼습니다.\n");
	            
		if((cnum>30&&gnum>30))
                       printf("누가 이긴지 알 수 없습니다.\n");	
		
                if (gnum == 30)
		
			printf("computer가 이겼습니다\n");
			
		
	}
	
	return 0;
}


int odd(int n)
{
	int i,cnum, gnum;
	printf("홀수이며 gamer가 먼저 뽑습니다.\n");
	gnum = 1 + rand() % 30;	
	cnum = 1 + rand() % 30;
		for (i = 1; cnum <=30&&gnum <=30; i++)
		{
			gnum = (cnum+1)+rand()%3;
			printf("gamer:%2d", gnum);
			cnum = (gnum + 1) + rand() % 3;
			printf("  computer:%2d\n\n", cnum);
			
		
		if (cnum == 30)
		
			printf("gamer가 이겼습니다.\n");
                        
		if((cnum>30&&gnum>30)||(cnum>30||gnum>30))
                       printf("누가 이긴지 알 수 없습니다.\n");	
		       
                if (gnum == 30)
		
			printf("computer가 이겼습니다\n");
			
		}
	
return 0;
}
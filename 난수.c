#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int odd(int n);
int even(int n);

int main(void)
{
	int n, i = 1;
	char gamer, computer;
	//���� �״�� ������
	srand((unsigned)time(NULL));
	printf("1~6���� �������� ���� �̽��ϴ�.(Ȧ��:gamer,¦��:computer)\n");
	n = 1 + rand() % 6;
	if(n%2==0)
	   even(n);
	else
	  odd(n);
}

int even(int n)
{
	int i,cnum,gnum;
	
	printf("¦���̸� computer�� ���� �̽��ϴ�.\n");
    cnum = 1 + rand() % 30;
	gnum = 1 + rand() % 30;
	
	for (i = 1; cnum <= 30 && gnum <= 30; i++)
	{
		cnum = (gnum + 1) + rand() % 3;
		printf("computer:%2d", cnum);
		gnum = (cnum + 1) + rand() % 3;
		printf("  gamer:%2d\n\n", gnum);

		if (cnum == 30)
		    printf("gamer�� �̰���ϴ�.\n");
	            
		if((cnum>30&&gnum>30))
                       printf("���� �̱��� �� �� �����ϴ�.\n");	
		
                if (gnum == 30)
		
			printf("computer�� �̰���ϴ�\n");
			
		
	}
	
	return 0;
}


int odd(int n)
{
	int i,cnum, gnum;
	printf("Ȧ���̸� gamer�� ���� �̽��ϴ�.\n");
	gnum = 1 + rand() % 30;	
	cnum = 1 + rand() % 30;
		for (i = 1; cnum <=30&&gnum <=30; i++)
		{
			gnum = (cnum+1)+rand()%3;
			printf("gamer:%2d", gnum);
			cnum = (gnum + 1) + rand() % 3;
			printf("  computer:%2d\n\n", cnum);
			
		
		if (cnum == 30)
		
			printf("gamer�� �̰���ϴ�.\n");
                        
		if((cnum>30&&gnum>30)||(cnum>30||gnum>30))
                       printf("���� �̱��� �� �� �����ϴ�.\n");	
		       
                if (gnum == 30)
		
			printf("computer�� �̰���ϴ�\n");
			
		}
	
return 0;
}
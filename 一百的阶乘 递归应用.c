#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int shu[29]={0};	
	shu[0]=1;
	cheng(shu);
	shuchu(shu);
	return 0;
}

void cheng(int shu[])
{
	int i;
	int j;
	for(i=1;i<=100;i++)
	{
		for(j=0;j<29;j++)
		{
			shu[j]*=i;
		
		}
		jinwei(shu);
	}	
			
	
}

void jinwei(int shu[])
{
	int i;
	for(i=0;i<28;i++)
	{
		shu[i+1]+=shu[i]/10000000;
		shu[i]%=10000000;
	}
}

void shuchu(int shu[])
{
	int i; 
	for(i=28;i>=0;i--)
	{
		while(shu[i]==0)i--;
		printf("%07d",shu[i]);
	}
}

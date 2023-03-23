#include<stdio.h>
int main()
{
	int n,i,j,dice[n];
	int one=0,two=0,three=0,four=0,five=0,six=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&dice[i]);
	}
	for(j=0;j<n;j++)
	{
		if(dice[j]==1)
		{one++;
		}
		
		else if(dice[j]==2)
		{two++;
		}
		
		else if(dice[j]==3)
		{three++;
		}
		
		else if(dice[j]==4)
		{four++;
		}
		
		else if(dice[j]==5)
		{five++;
		}
		
		else if(dice[j]==6)
		{six++;
		}
		
	}
	
	printf("1: %d\n",one);
	printf("2: %d\n",two);
	printf("3: %d\n",three);
	printf("4: %d\n",four);
	printf("5: %d\n",five);
	printf("6: %d\n",six);
	
	return 0;
	
	
}

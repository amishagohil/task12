#include<stdio.h>

int main()
{
	    int i,j,k;
	    for(i=1;i<=5;i++)
	    {
	    	for(j=1;j<=i;j++)
	    	{
	    	  	if(j%2==0)
	    	  	{
	    	  		printf("1");
	    	  	}
	    	  	else
	    	  	{
	    	  		printf("0");
				}
	    	}
			printf("\n");  
		}
}

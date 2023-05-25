#include <stdio.h>

int main() {
    int n=5, i, j;

   
    

    for (i = 1; i <= n; i++) 
	{
        for (j = i; j >= 1; j--)
	    {
	    	if(j%2==0)
	    	{
	    		printf("|");
			}
			else
			{
				printf("-");
			}
            
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int n=5, i, j;

   
    

    for (i = 1; i <= n; i++) 
	{
        for (j = i; j >= 1; j--)
	    {
	    	if(j%2==0)
	    	{
	    		printf("0");
			}
			else
			{
				printf("1");
			}
            
        }
        printf("\n");
    }

    return 0;
}


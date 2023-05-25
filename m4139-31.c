#include <stdio.h>

 main() {
    char N='A', i, j;

  
   

    for (i = 'A'; i <= 'E'; i++) 
	{
        for (j='A'; j <= i; j++) 
		{
            printf("%C",N++);
        }
        printf("\n");
    }

    return 0;
}


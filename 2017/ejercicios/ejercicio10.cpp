#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define L 28
#define N 2

int main(){
		char letrasmin[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char letrasmayus[L]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int num[L];
	//char *puntero = NULL;
	char temporal[300];
	int num2;

	printf("Dame un texto\n"); 
	scanf("%s", temporal);
	num2= strlen(temporal);

	for (int i = 0; i < num2 ; ++i)
	{	
		 for (int x = 0; x < L; ++x)
		 {
		 	if (i == 0)
		 	{
		 		num[x] = 0;
		 	}
		 	if (temporal[i] == letrasmayus[x] or letrasmin[x])
		 	{	

		 		num[x] = num[x]+1;
		 		printf("%c",temporal[i]);
		 		printf("%c",letrasmayus[x]);

		 	}
		 	else
		 	{
		 		num[27]+=1;
		 	}
		 }


		 	
		 
	}
	printf("%i", num[1]);

    return EXIT_SUCCESS;
}

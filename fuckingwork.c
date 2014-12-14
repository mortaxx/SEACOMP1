#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	int gettingInput = 1, checkingInput, counter, length;
	char input[10];
	while(gettingInput)
	{
		
		printf("NUMBER!:\n");
		scanf("%s", input);
		counter = 0;
		length = strlen(input);
		printf("Length:%d\n", length);
		checkingInput = 1;
		while(checkingInput)
		{
			if( (isalpha(input[counter])) )
			{
				printf("INVALID\n");
				checkingInput = 0;
			}
			else
			{
				if(counter==length)
				{
					gettingInput = 0;
					checkingInput = 0;
				}
				counter++;
			}
		}
	}
}

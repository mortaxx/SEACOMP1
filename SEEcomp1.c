#include <stdio.h>
#include <time.h>

int main()
{
	while(sentinel)
	{
		printMenu();
		choice = getInput();
		switch(choice)
		{
			case '1':
				dice();
				break;
			case '2':
				surfaceArea();
				break;
			case '3':
				volume();
				break;
			case '4':
				results();
				break;
			case '5':
				uniquefx();
				break;
			case '6':
				exit();
				break;
			default:
				printf("INVALID");
				break;
		}
	}
}

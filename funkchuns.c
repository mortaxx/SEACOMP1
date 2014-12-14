#include <stdio.h>
#include <time.h>

int x, value, dicesum, sides, dice, rolls, length, volume, radius, valid;
float pi = 3.14, circle;


int getInput(void)
{









}

int printMenu(void)
{
	printf("Select 1-6)\n1. DICE!:\n2. SURFACE AREA(of a cirlce):\n3. VOLUME(of a cube)\n4. SAVE RESULTS:\n5. UNIQUE FUNCTION:\n6. EXIT\n");
}

int dice()
{
	srand(time(NULL));
	printf("Enter the number of sides")

	if
	printf("You rolled:\n");
	while (rolls-- > 0)
	{			
		for (x = 0; x < dice; x++)
		{
			value = rand() % sides + 1;
			dicesum += value;
			if (x == dice - 1)
			{
				printf("%d\n", dicesum);
				dicesum = 0;
			}
		}
	}
}


#include <stdio.h>
#include <ctype.h>
//i got the ctype.h header from geeksforgeeks when i was looking up how to do toupper() function

int main()
{
	int n = -1;
	long nRec = 1, i;
	char choice;

	while (n < 1 || n > 15)
	{
		printf("Please enter a number between 1-15: ");
		scanf("%d", &n);
		if(n < 1 || n > 15)
		{
			printf("The number is not between 1-15. Please try again.\n");
		}
	}
	//looping factorial formula
	for (i = 1; i <= n; i++)
	{
		nRec *= i;
	}
	//recursive factorial formula
	long int rec(int n)
	{
		if (n == 1)
		{
			return 1;
		}
		else
		{
			return n * rec(n-1);
		}
	}
	printf("Is recursion desired? Y for yes, N for no: ");
	scanf("%c", &choice);
	choice = getchar();
	choice = toupper(choice);
	//i also got getchar() and toupper() from geeksforgeeks pls dont point deduct :')
	if (choice == 'Y')
	{
		printf("Factorial of %d with recursion is %ld\n", n, rec(n));
		return 0;
	}
	else if (choice == 'N')
	{
		printf("Factorial of %d without recursion is %ld\n", n, nRec);
		return 0;
	}
	else
	{
		printf("Invalid input. \n");
	}
	return 0;
}

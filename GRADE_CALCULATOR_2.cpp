#include <stdio.h>

int main()
{
	int sc1, sc2, sc3;
	printf("Type your 1st score : ");
	scanf_s("%d", &sc1);
	printf("\nType your 2nd score : ");
	scanf_s("%d", &sc2);
	printf("\nType your 3rd score : ");
	scanf_s("%d", &sc3);

	int sum = sc1 + sc2 + sc3;

	if (sum < 50)
	{
		printf("\nF");
	}
	if (sum >= 50 && sum <= 55)
	{
		printf("\nD");
	}
	if (sum >= 55 && sum <= 59)
	{
		printf("\nD+");
	}
	if (sum >= 60 && sum <= 64)
	{
		printf("\nC");
	}
	if (sum >= 65 && sum <= 69)
	{
		printf("\nC+");
	}
	if (sum >= 70 && sum <= 74)
	{
		printf("\nB");
	}
	if (sum >= 75 && sum <= 79)
	{
		printf("\nB+");
	}
	if (sum >= 80)
	{
		printf("\nA");
	}
	return 0;
}
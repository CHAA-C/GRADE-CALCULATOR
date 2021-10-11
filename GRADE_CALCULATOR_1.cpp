#include <stdio.h>

int main()
{
	int sc1, sc2, sc3;
	printf("Type your 1st score : ");
	scanf_s("%d", &sc1);
	printf("\nType your 2nd score : ");
	scanf_s("%d", &sc2);
	printf("\nType your 3rd score : ");
	scanf_s("%d",&sc3);

	if (sc1 + sc2 + sc3 < 50)
	{
		printf("\nF");
	}
	if (sc1 + sc2 + sc3 >= 50 && sc1 + sc2 + sc3 <= 55)
	{
		printf("\nD");
	}
	if (sc1 + sc2 + sc3 >= 55 && sc1 + sc2 + sc3 <= 59)
	{
		printf("\nD+");
	}
	if (sc1 + sc2 + sc3 >= 60 && sc1 + sc2 + sc3 <= 64)
	{
		printf("\nC");
	}
	if (sc1 + sc2 + sc3 >= 65 && sc1 + sc2 + sc3 <= 69)
	{
		printf("\nC+");
	}
	if (sc1 + sc2 + sc3 >= 70 && sc1 + sc2 + sc3 <= 74)
	{
		printf("\nB");
	}
	if (sc1 + sc2 + sc3 >= 75 && sc1 + sc2 + sc3 <= 79)
	{
		printf("\nB+");
	}
	if (sc1 + sc2 + sc3 >= 80)
	{
		printf("\nA");
	}
	return 0;
}
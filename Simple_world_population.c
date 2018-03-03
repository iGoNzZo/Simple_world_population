#include <stdio.h>

long currentPopulation = 7000000000; 
long increase;
long populationHolder;

int counter = 0;
 
float growthRate = .113;

main(void)	{
	
	printf("	year: %d", counter + 1);
	printf(" | population: %ld", currentPopulation);
	printf(" | increase: %d" , 0);
	printf("\n");
	
	for(counter = 1; counter < 75; counter++)	{
		populationHolder = ((currentPopulation * growthRate) * counter) + currentPopulation; 
		increase = populationHolder - currentPopulation;
		
		if(increase > currentPopulation && increase < 7900000000)	{
			printf("	year: %d", counter + 1);
			printf(" | population: %ld", populationHolder);
			printf(" | increase: %ld" , increase);
			printf(" <- double todays population");
		}
		else	{
			printf("	year: %d", counter + 1); 
			printf(" | population: %ld", populationHolder);
			printf(" | increase: %ld" , increase);
		}
		printf("\n");
	}
}

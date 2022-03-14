#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define LENGHT 5

void SelectionSort(int* array) 
{
	int i, j;
	int minIndex, temp;
	for(i = 0; i < LENGHT; i++) 
	{
		minIndex = i;
		for(j = i; j < LENGHT; j++) 
		{
			if(array[j] < array[minIndex]) 
			{
				minIndex = j;
			}
		}
		
		temp = array[i];
		array[i] = array[minIndex];
		array[minIndex] = temp;
	}
}

void InsertionSort(int* array) 
{
	
}

void PrintIntArray(int* array, char message[]) 
{
	printf("\n");
	int i;
	for(i = 0; i < LENGHT; i++) 
	{
		printf("%d ", array[i]);
	}
	
	printf(message);
}

int main() {
	
	int numbers[LENGHT];
	
	while(1) 
	{
	
		printf("Enter %d numbers:\n", LENGHT);
	
		int i;
		for(i = 0; i < LENGHT; i++) 
		{
			scanf("%d", &numbers[i]);
		}
		PrintIntArray(numbers, "");
		SelectionSort(numbers);
		printf("\nSorted: ");
		PrintIntArray(numbers, "\n\n");
	}
	
	return 0;
}

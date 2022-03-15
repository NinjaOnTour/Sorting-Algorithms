#include<stdio.h>
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
	int i, j;
	int temp;
	for(i = 1; i < LENGHT; i++) 
	{
		for(j = i - 1; j >= 0; j--) 
		{
			if(array[i] < array[j]) 
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				i--;
			}
		}
	}
}

void BubbleSort(int* array) 
{
	int i, j, n;
	int temp;
	for(i = 0; i < LENGHT; i++) 
	{
		for(j = 0; j < LENGHT-1; j++) 
		{
			n = j+1;
			if(array[j] > array[n]) 
			{
				temp = array[j];
				array[j] = array[n];
				array[n] = temp;
			}
		}
	}
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
		SelectionSort(numbers); 			// Sort
		printf("\nSorted: ");
		PrintIntArray(numbers, "\n\n");
	}
	
	return 0;
}

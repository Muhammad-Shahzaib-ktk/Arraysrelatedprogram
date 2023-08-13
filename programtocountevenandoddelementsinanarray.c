#include<stdio.h>

int CountEven(int Arr[], int countEven)
	{
		for(int i = 0; i < 6; i++)
		{
			if(Arr[i] % 2 == 0)
			countEven++;
		}
		
		
		return countEven;
	}
	
		int CountOdd(int Arr[], int countOdd)
	{
		for(int i = 0; i < 6; i++)
		{
			if(Arr[i] % 2 != 0)
			countOdd++;
		}
		
		
		return countOdd;
	}
	
int main(){
	
	
	
	int Arr[6]= {4,7,5,3,6,2};
	int countEven = 0;
	int countOdd = 0;
	
	printf("Even Elements in the following Array are : %d\n", CountEven(Arr, countEven));
	printf("Odd Elements in the following  Array are :  %d", CountOdd(Arr, countOdd));
	
	
	return 0;
}
#include<stdio.h>
int main(){
	//Declare and initiliaze an array of let's say 5 elements
	int Arr[5] = {6,7,3,6,8};
	int Avg = 0; // This Avg variable is to store Average of the Array's elements
	int sum = 0; // Variable to store sum cause we will need it to find the average
	
	/* As we know, The formula to find average is " Avg = Sum of all elements / No. of total elements"
	To find sum, we will use for loop and to find the total no of elements we will use Sizeof() function
	*/
	for(int i = 0; i < 5; i++ ){
		sum += Arr[i];
		
	}
	printf("Sum is : %d\n", sum);
	
	int TotalNoOfElements = sizeof(Arr) / sizeof(Arr[0]); // Variable to store total No of elements
	
	// We got both Sum and No of elements of array, It's time to find the Average
	
	Avg = sum /TotalNoOfElements;
	
	printf("Average is : %d", Avg);
	
	return 0; 
	
	
}
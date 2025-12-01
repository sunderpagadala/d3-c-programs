//Write a C program to find the minimum, maximum and average in an
//array of integers.
#include<stdio.h>
int main()
{
    int arr[10], max, min, size, i, sum = 0;
    float avg;

printf("Enter size of the array (<10): ");
scanf("%d", &size);
printf("Enter elements of the array: ");
for(i = 0; i< size; i++)
    {
scanf("%d", &arr[i]);
        sum += arr[i];      // calculating sum here
    }
    // initialize min and max with first element
    min = max = arr[0];
    // find min and max
for(i = 1; i< size; i++)
    {
        if(arr[i] > max) 
            max = arr[i];

        if(arr[i] < min) 
            min = arr[i];
    }
avg = (float)sum / size;  // average calculation
printf("\nMaximum is: %d", max);
printf("\nMinimum is: %d", min);
printf("\nAverage is: %.2f", avg);
    return 0;
}
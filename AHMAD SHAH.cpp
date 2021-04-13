#include<stdio.h>
int main ()
{
	float temparray[14], sum=0,average;
	int i;
	for(i=0; i<14; i++)
	{
		printf("Enter temperature reading of day:%d=",i+1);
		scanf("%f", &temparray[i]);
		sum = sum + temparray[i];
	}
	average = sum / 14.0;
	printf("the average temperature of 2 weeks is = %.2f",average);
	return 0;
}

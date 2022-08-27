//lINEAR SCARCH

#include<stdio.h>
int main()
{
	int array[100],scarch, c, n;
	printf("Enter number of elements in array: \n");
	scanf("%d",&n);
	printf("Enter %d integer(s): \n", n);
	for(c=0;c<n;c++)
	scanf("%d", &array[c]);
	printf("Enter a number to scarch: \n");
	scanf("%d", &scarch);
	for(c=0;c<n;c++)
	{
		if(array[c]==scarch)//if required element is found
		{
			printf("%d is preasent at location %d: \n", scarch, c+1);
			break;
		}
	}
	if(c==n)
	printf("%d isn't present in the array: \n", scarch);
	return 0;
}

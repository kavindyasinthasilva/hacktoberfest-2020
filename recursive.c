#include <stdio.h>

int main()
{
	int arr[10], i, j, k, n;

	printf("Enter no of elements:   ");
	scanf("%d", &n);

	printf("\nenter elements of array \n");
	for (i = 0; i < n; i++)
	{
    	scanf("%d", &arr[i]);
   	}

	for (i = 0; i <n; i++)
	{
		for(j = i + 1; j <n; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			for(k = j; k <n; k++)
    			{
    				arr[k] = arr[k + 1];
				}
				n--;
				j--;
			}
		}
    }
 	for (i = 0; i <n; i++)
  	{
 		printf("%d\t", arr[i]);
  	}
 	return 0;
}

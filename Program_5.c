//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int arr[10], n, i, largest, smallest;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array: ");

    for(i = 0; i < n; i++)
      scanf("%d",&arr[i]);
      printf("\nElements of the array : ");
    
    for(i=0;i<n;i++)
      printf("%d ",arr[i]);
      largest=smallest=arr[0];
    
    for(i=0;i<n;i++)
    {
      if(arr[i]>largest)
      largest=arr[i];
      if(arr[i]<smallest)
      smallest=arr[i];
    }

    printf("\nSmallest element of the array is %d",smallest);
    printf("\nLargest element of the array is %d",largest);

    return 0;
}

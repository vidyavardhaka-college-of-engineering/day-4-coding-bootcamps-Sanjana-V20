//Write a program in C to find the sum of all elements of the array. 
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//2 5 8
//Expected Output:
//Sum of all elements stored in the array is : 15
#include <stdio.h>
int main()
{
  int a[100];
  int i, n, sum=0;

  printf("Input the number of elements to be stored in the array : ");
  scanf("%d",&n);

  printf("Input %d elements in the array : \n",n);
  for(i=0;i<n;i++)
  {
    printf("element - %d : ",i);
    scanf("%d",&a[i]);
  }
  
  for(i=0;i<n;i++)
  {
    sum += a[i];
  }
   printf("Sum of all elements stored in the array is : %d\n\n", sum);
  return 0;
}

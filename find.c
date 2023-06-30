#include <stdio.h>
int main()
{
  int a[50],n,i,x;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter the array elements:");
  for(i=0;i<n;++i)
 scanf("%d",&a[i]);
printf("Enter the elements to search:\n");
scanf("%d",&x);
  for(i=0;i<n;++i)
  if(a[i]==x)
  break;
  if(i<n)
  printf("Element found in the index %d",i);
  else
  printf("Element not found");
  return 0;
}

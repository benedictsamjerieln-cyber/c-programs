
#include <stdio.h>

int main()
{
 printf("Enter a number\n");
 int n,i=2,j=0;
 scanf("%d",&n);
   if(n==1)
   {
 printf("0 ,");
 return 0;
   }
 if(n>1)
 {
  int a[n];
  a[0]=0;
  a[1]=1;
  while(i<n)
  {
   a[i]=a[i-1] + a[i-2];
   i=i+1;
  }
  printf("the fibonacci sequence upto nth digit is\n");
  while(j<n)
  {
      printf("%d ,",a[j]);
      j=j+1;
  }
 }
 else
 {
 printf("invalid input");
 }

    return 0;
}

#include<stdio.h>
int main()
{
  long int n;
  scanf("%ld",&n);
  if(n>0 && n<=100000)
  {
    if(n%2==0)
    {
      printf("even");
    }
    else
    {
      printf("odd");
    }
  else
   {
      printf("invalid");
    }
}

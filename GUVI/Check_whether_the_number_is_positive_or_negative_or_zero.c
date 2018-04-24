#include <stdio.h> 
int main()
{
  long int n;
  scanf("%ld",&n);
  if(n>0 && n<=100000)
  {
    printf("positive");
  }
  else if(n<0)
  {
    printf("negative");
  }
  else if(n==0)
  {
    printf("zero");
  }
  else
  {
    printf("invalid output");
  }
  return 0;
}

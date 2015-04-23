#include<stdio.h>

int main()
{
  int b,n,m;
  int loop1Count=0;
  int temp=1;
  printf("Enter b^n mod m (b,n,m): ");
  scanf("%d %d %d",&b,&n,&m);
  for(loop1Count=0;loop1Count<n;loop1Count++)
    {
      temp=(temp*b)%m;
    }
  printf("\n %d \n",temp);
  return 0;
}

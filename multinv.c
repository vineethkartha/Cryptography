/* A program to find multiplicative inverse of ax congruent 1(mod m)
We use extended Euclediaen  algorithm
ax + by =gcd(a,b)

here 
ax -1 =qm
ax -qm =1
*/

#include<stdio.h>
int main()
{
  int x;
  float xTemp;
  int a,m;
  int flag=1,q=1;
  printf("Enter a and m: ");
  scanf("%d %d",&a,&m);
  while(flag)
    {
      xTemp=(q*m+1)*1.0/a;
      if(xTemp==(int)xTemp)
	{
	  x=xTemp;
	  //printf("x is %d\n",x);
	  flag=0;
	}
      q++;
    }

  printf("x is %d\n",x);
  return 0;
}

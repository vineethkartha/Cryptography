
#include<stdio.h>

int main()
{
  char str[100];
  char enc[100];
  int key;
  int i=0;
  printf("Enter the string to encode :");
  scanf("%[^\n]s",str);
  printf("Enter the key: ");
  scanf("%d",&key);
  for(i=0;str[i]!='\0';i++)
    {
      if(str[i]!=' ')
	enc[i]=(str[i]+key)%91>64?(str[i]+key)%91:(str[i]+key)%91+65;
      else
	enc[i]=str[i];
    }
  enc[i]='\0';

  printf("%s \n",enc);
  return 0;
}

#include<stdio.h>

int main()
{
    FILE *read, *write;
    int i,j;
    //int n=3233,e=17,d=2753;
    int n=221,e=23,d=167;
    int e_p=1;
    unsigned char msg[100];
    int dec,enc;
    int c;
    int en;
    unsigned char test=223;
    //int msg,dec,enc;
    unsigned char encf[100];
    unsigned char decf[100];
    printf("\n%c\n",test);
    printf("\n%u\n",test);
    printf("Enter the message: ");
    scanf("%[^\n]s",msg);
    read=fopen("sam.txt","r");
    write=fopen("sam_enc.txt","w");

  /******************************************************/
    c=getc(read);
    while(c!=EOF)
    {
        printf("%c",c);
        enc=1;
        for(j=0;j<e;j++)
        {
            enc=(enc*c) %n;
        }
        test=enc;
        printf(" %d : %c \n",test,enc);
        putc(test,write);
        //fprintf(write,"%d\n",enc);
        c=getc(read);
    }
    fclose(read);
    fclose(write);

    /*****************************************************/
printf("\n\n");
    read=fopen("sam_enc.txt","rb");
    write=fopen("sam_dec.txt","w");
    c=getc(read);
    printf("\n\n%d ",c);
    while(c!=EOF)
    {
        printf("%d ",c);
        dec=1;
        for(j=0;j<d;j++)
        {
            dec=(dec*c) %n;
        }
        test=dec;
        printf("%d : %d \n",test,dec);
        putc(test,write);
        c=getc(read);
    }

/*
    for(i=0;msg[i]!='\0';i++)
    {
        enc=1;
        e_p=1;
        for(j=0;j<e;j++)
        {
            enc=(enc*msg[i])%n;
        }
        encf[i]=enc;
    }
printf("\n\n");
  for(i=0;i<msg[i]!='\0';i++)
        printf("%c",encf[i]);
    //enc[i]=msg[i];
printf("\n\n");
    for(i=0;msg[i]!='\0';i++)
    {
        dec=1;
        e_p=1;
        for(j=0;j<d;j++)
        {
            dec=(dec*encf[i]) %n;
        }
        decf[i]=dec;
    }
    for(i=0;i<msg[i]!='\0';i++)
        printf("%c",decf[i]);

*/
        fclose(read);
        fclose(write);
    return 0;
}

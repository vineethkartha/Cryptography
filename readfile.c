#include<stdio.h>

int main()
{
    FILE *read;
    char c=0;
    read=fopen("sam_enc.txt","rb");
    c=getc(read);
    while(c!=EOF)
    {
        printf("%c",c);
        c=getc(read);
    }
    fclose(read);
    return 0;
}

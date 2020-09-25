#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("test.txt","a");
    fprintf(fp,"Append mode");
    fclose(fp);
    return 0;
}

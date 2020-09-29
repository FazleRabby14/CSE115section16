#include <stdio.h>
struct s {
     char name[50];
     double height;
      };
    int main()
   {
      struct s a[5];
      FILE *fptr;
      int i;
      fptr=fopen("test.txt","w");

      for(i=0;i<5;i++){
        gets(a[i].name);
        scanf("%lf",&a[i].height);
        getc(stdin);
    }
    for(i=0;i<5;i++){
        fprintf(fptr,"%s\n%lf\n",a[i].name,a[i].height);
    }
        fclose(fptr);
    }

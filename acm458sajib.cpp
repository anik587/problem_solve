#include<stdio.h>
#include<string.h>
 char c;

int main()
{
    long i,j;
    while((c=getchar())!=EOF)
    {
      if(c=='\n') {  printf("\n");  continue;  }                       
       printf("%c",c-7);                    
    }
    
    
return 0;    
}



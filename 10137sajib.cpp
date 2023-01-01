#include<stdio.h>
#include<string.h>
#include<stdlib.h>
double a[1001],avg1,avg,sum;
int main()
{
    long temp,i,j,k,l,n;
    
    while(scanf("%ld",&n) && n)
    {
       sum=0.0;
       for(i=0;i<n;i++)
       {
        scanf("%lf",&a[i]);
        sum+=a[i];
        }
        avg=sum/(float)n;
        temp=(double)avg*100;
        avg=temp/100; 
        sum=0.0;
        for(i=0;i<n;i++)
          if(a[i]<avg) sum+=avg-a[i];
          
        printf("$%.2lf\n",sum);                                   
       }                  
    return 0;
    }

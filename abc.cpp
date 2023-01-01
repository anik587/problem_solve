#include<stdio.h>
#include<string.h>
long a[10000000];
int main()
{


long t,n,q,p,i,min;


scanf("%ld",&t);
while(t--)
{
  p=0;q=0;
  scanf("%ld",&n);
scanf("%ld",&a[0]);
min=a[0];
for(i=1;i<n;i++)
{
scanf("%ld",&a[i]);
q=a[i]-min;
if(a[i]<=min)
min=a[i];
if(q>=p)
p=q;
}
if(p>0)
printf("%ld\n",p);
else
printf("UNFIT\n");
memset(a,0,sizeof(a));
}
return 0;
}

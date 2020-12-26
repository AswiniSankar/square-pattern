/*
input:5
output:

 5 5 5 5 5 5 5 5 5
 5 4 4 4 4 4 4 4 5
 5 4 3 3 3 3 3 4 5
 5 4 3 2 2 2 3 4 5
 5 4 3 2 1 2 3 4 5
 5 4 3 2 2 2 3 4 5
 5 4 3 3 3 3 3 4 5
 5 4 4 4 4 4 4 4 5
 5 5 5 5 5 5 5 5 5


*/
#include<stdio.h>
int main()
{
  int n,i,j,k,t,l=0,m,r,p=0,u,f=2,g;
  scanf("%d",&n);
  t=n;
  r=n-1;
  g=n-2;
  for(i=0;i<(n*2)-1;i++)
  {
   if(i<(n*2)/2)
   {
     for(k=0;k<l;k++)
       printf("%d ",t--);
    m=t;
   l++;
    for(j=k;j<(n*2)/2;j++)
     printf("%d ",m);
    t=n;
     for(j=0;j<r;j++)
       printf("%d ",n-(i%n));
   r--;
    u=n-p+1;
     for(j=0;j<p;j++)
       printf("%d ",u++);
     p++;
  t=n;
  
   }
  else
  {t=n;
  
    for(j=0;j<n;j++)
     {if((i+j)<=(n-1)*2)
         printf("%d ",t--);
      else
         printf("%d ",f);
      }
    t=f;
    f++;
    for(j=0;j<(i%n)+1;j++)
      printf("%d ",t);
     for(j=0;j<g;j++)
        printf("%d ",++t);
      g--;
  }
  printf("\n");
  }
}




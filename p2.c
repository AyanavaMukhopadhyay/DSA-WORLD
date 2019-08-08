#include<stdio.h>
#include<stdlib.h>
int* prod(int *p,int r,int *q,int s);
void main()
{int *a,m,u,i,*b,n,co,e,*c,term,j,k,d;
printf("Enter the degree of the 1st polynomial: ");
scanf("%d",&m);
a=(int *)malloc((m+1)*sizeof(int));
printf("Enter the number of non zero elements in the first polynomial: ");
scanf("%d",&j);
for(d=0;d<j;d++)
{printf("Enter the exponent: ");
scanf("%d",&e);
printf("Enter the coefficient of the power %d: ",e);
scanf("%d",&co);
a[e]=co;
}
printf("Enter the degree of the 2nd polynomial: ");
scanf("%d",&n);
b=(int *)malloc((n+1)*sizeof(int));
printf("Enter the number of non zero elements in the second polynomial: ");
scanf("%d",&k);
for(d=0;d<k;d++)
{printf("Enter the exponent: ");
scanf("%d",&e);
printf("Enter the coefficient of the power %d: ",e);
scanf("%d",&co);
b[e]=co;
}
c=prod(a,m,b,n);
printf("Product of the polynomials is :\n");
for(i=0;i<=(m+n);i++)
{if(c[i]==0)
 continue;
 else
 {
if(i!=(m+n))
  printf("%d*x^%d+",c[i],i);
  else
  printf("%d*x^%d",c[i],i);
  }
  } 
}  

int* prod(int *p,int r,int *q,int s)
{int *c,i,j;
c=(int*)malloc((r+s+1)*sizeof(int));
for(i=0;i<=(r+s);i++)
c[i]=0;
for(i=0;i<=r;i++)
{for(j=0;j<=s;j++)
c[i+j]+=p[i]*q[j];
}
return c;
}

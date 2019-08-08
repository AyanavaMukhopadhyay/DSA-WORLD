#include<stdio.h>
#include<stdlib.h>
int* add(int *p,int r,int *q,int s);
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
printf("The 1st polynomial is:");
for(i=0;i<=m;i++)
{if(a[i]==0)
 continue;
 else
 {
if(i!=m)
  printf("%d*x^%d+",a[i],i);
  else
  printf("%d*x^%d",a[i],i);
  }
  }
  printf("\n");
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
printf("The 2nd polynomial is:");
for(i=0;i<=n;i++)
{if(b[i]==0)
 continue;
 else
 {
if(i!=n)
  printf("%d*x^%d+",b[i],i);
  else
  printf("%d*x^%d",b[i],i);
  }
  }
  printf("\n");
c=add(a,m,b,n);
printf("Addition of the polynomials is :\n");
if(m>n)
{for(i=0;i<=m;i++)
{if(c[i]==0)
 continue;
 else
 {
if(i!=m)
  printf("%d*x^%d+",c[i],i);
  else
  printf("%d*x^%d",c[i],i);
  }
  } }
 else
 {for(i=0;i<=n;i++)
{if(c[i]==0)
continue;
else
{
if(i!=n)
  printf("%d*x^%d+",c[i],i);
  else
  printf("%d*x^%d",c[i],i);
  }
  }  
} }
int* add(int *p,int r,int *q,int s)
{int *c,i;
if(r>s)
{c=(int *)malloc((r+1)*sizeof(int));
 for(i=0;i<=r;i++)
 c[i]=p[i];
 for(i=0;i<=s;i++)
 c[i]=c[i]+q[i];
 }
 else
{c=(int *)malloc((s+1)*sizeof(int));
 for(i=0;i<=s;i++)
 c[i]=q[i];
 for(i=0;i<=r;i++)
 c[i]=c[i]+p[i];
 }
 return c;
 }

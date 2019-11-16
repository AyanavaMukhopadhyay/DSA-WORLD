//polynomial multiplication using structures
#include<stdio.h>
struct poly
{int coef;
int exp;
};
int main()
{int n,m,i,j,k;
	printf("Enter the number of non zero elements to be in the 1st polynomial");
	scanf("%d",&n);
	struct poly a[n];
	for(i=0;i<n;i++)
		{printf("Enter the exponent of the %d element",i+1);
scanf("%d",&a[i].exp);
printf("Enter the coeffecient with %d exponent",a[i].exp);
scanf("%d",&a[i].coef);
}
	printf("Enter the number of non zero elements to be in the 2nd polynomial");
	scanf("%d",&m);
	struct poly b[m];
	for(i=0;i<m;i++)
		{printf("Enter the exponent of the %d element",i+1);
scanf("%d",&b[i].exp);
printf("Enter the coeffecient with %d exponent",b[i].exp);
scanf("%d",&b[i].coef);
}
printf("The 1st polynomial is:");
for(i=0;i<n;i++)
	{if(i==(n-1))
				printf("%dx^%d\n",a[i].coef,a[i].exp);
     else
		printf("%dx^%d+",a[i].coef,a[i].exp);}
		printf("The 2nd polynomial is:");
for(i=0;i<m;i++)
	{if(i==(m-1))
				printf("%dx^%d\n",b[i].coef,b[i].exp);
     else
		printf("%dx^%d+",b[i].coef,b[i].exp);}

struct poly c[m*n];
k=0;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {c[k].exp=a[i].exp+b[j].exp;
        c[k].coef=a[i].coef*b[j].coef;
   k++;
    }
}
for(i=0;i<k-1;i++)
{
    for(j=i+1;j<k;j++)
    {if(c[i].exp==c[j].exp)
       {c[i].coef+=c[j].coef;
       c[j].coef=0;}
       }
}
printf("The product of the two polynomials is:");
for(i=0;i<k;i++)
    {  if(c[i].coef==0)
    continue;
    else{
         if(i==(k-1))
        printf("%dx^%d",c[i].coef,c[i].exp);
        else
        printf("%dx^%d+",c[i].coef,c[i].exp);
    }
   }
}

//polynomial addition using structures
#include<stdio.h>
struct poly
{int coef;
int exp;
};
int main()
{int n,m,i,j,k,d;
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
		struct poly c[m+n];

		i=0;
        j=0;
        k=0;
        while(i<=n && j<=m)
        {if(i==n)
            {c[k].exp=b[j].exp;
            c[k].coef=b[j].coef;
            j++,k++;
            }
            else if(j==m)
            {c[k].exp=a[i].exp;
            c[k].coef=a[i].coef;
            i++,k++;
            }
            else if(a[i].exp<b[j].exp)
            {c[k].exp=b[j].exp;
            c[k].coef=b[j].coef;
            j++;k++;
            }
            else if(a[i].exp>b[j].exp)
            {c[k].exp=a[i].exp;
            c[k].coef=a[i].coef;
            i++;k++;
            }
            else if(a[i].exp==b[j].exp)
        {c[k].exp=a[i].exp;
          c[k].coef=a[i].coef+b[j].coef,a[i].coef,b[j].coef;
            i++;j++;k++;

            }
        }
k=k-1;
       printf("The addition of the two polynomials is:");
        for(i=0;i<k;i++)
        {
            if(i==(k-1))
				printf("%dx^%d",c[i].coef,c[i].exp);
     else
		printf("%dx^%d+",c[i].coef,c[i].exp);
        }
	/* code */
	return 0;
}

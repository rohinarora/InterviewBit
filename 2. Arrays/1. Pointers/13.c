#include<stdio.h>

int main()
{
printf("enter number");
int n;
scanf("%d",&n);

int *p=(int*)malloc(n*sizeof(int));
int i;
for (i=0;i<n;i++) printf(" %d",*(p+i));;
printf("\n");
for (i=0;i<n;i++)
{
    *(p+i)=i+1; // p[i]=i+1;
    printf(" %d",*(p+i));
}
printf("\n");

int *B= realloc(p,2*n);

for (i=0;i<2*n;i++)
{
    *(B+i)=i+1; // B[i]=i+1;
    printf(" %d",*(B+i));
}
}


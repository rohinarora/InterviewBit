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

free(p);
// *p=2; --> we can still modify the heap
//p=NULL;  ----> good pratice to assign pointer to null. we dont want anyone to access heap that has been freed by us
for (i=0;i<n;i++) printf(" %d",*(p+i));;
}

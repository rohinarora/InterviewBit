#include<stdio.h>
int add(int a,int b)
{
return a+b;
}

void helloworld(void)
{
printf("helloworld\n");
}
void helloworld2(char *s)
{
printf("%s\n",s);
}
int main()
{
int (*p)(int,int);
p=&add; // or p=add;

int c=p(7,8);  // or c=(*p)(10,11)
printf("%d\n",c);

void (*fp)(void);
fp=&helloworld;
fp();

void (*fp2)(char *);
fp2=helloworld2;
fp2("tom");
char z[100]="yolo";
fp2(z);
}

#include <stdio.h>
using namespace std;
void swap(int *p,int *q){
  int tmp=*p;
  *p=*q;
  *q=tmp;
}
void increment(int *p){
  *p=*p+1;
}
int main(int argc, char const *argv[]) {
  int a=10;
  int b=20;
  cout<<a<<" "<<b<<endl;
  swap(&a,&b);
  cout<<a<<" "<<b<<endl;
  increment(&a);
  cout<<a<<endl;
  return 0;
}

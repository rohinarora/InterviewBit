#include <stdio.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int a=1025;
  int *p;
  p=&a;
  cout <<"address "<<p<<" value "<<*p<<endl;
  void *q;
  q = p; // no need to type caste for void pointer
  cout <<"address "<<q<<endl;
  // cannot dereference void pointer (without typecasting)
  //cout <<" value "<<*q<<endl; // error
  // pointer arithematic not possible on void pointer
  //cout <<"address "<<q+1<<endl; // error
  return 0;
}

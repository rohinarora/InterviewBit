#include <stdio.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int a=10;
  int b=20;
  int *p; // same as int* p;
  p=&a;
  cout<<"address stored in p was "<<p<<endl;
  cout<<"dereferenced value of p was "<<*p<<endl;
  *p=b; // changes value of a. doesnt change p.
  cout<<"address stored in p is "<<p<<endl;
  cout<<"dereferenced value of p is "<<*p<<endl;
  return 0;
}

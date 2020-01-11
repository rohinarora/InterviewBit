#include <stdio.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int a=10;
  int *p; // same as int* p;
  // pointer variables are strongly typed. int * must be used to declare int pointer
  // this helps in pointer arithematic. also tells how much size of memory to read while dereferencing
  p=&a;

  /*
  int *p1; // pointer to integer
  string *p2;  // #pointer to character
  double *p3; // pointer to double
  */
  
  cout<<"address p is "<<p<<endl;
  cout<<"dereferenced value at p is "<<*(p)<<endl;
  cout<<"size of integer in this compiler is "<<sizeof(int)<<endl;
  cout<<"address next to p is "<<p+1<<endl;
  // +1 means read the next object (of datatype) the pointer is
  cout<<"dereferenced value next to p is "<<*(p+1)<<endl;
  cout<<"address next to next to p is "<<p+2<<endl;
  cout<<"dereferenced value next to next to p is "<<*(p+2)<<endl;
  return 0;
}

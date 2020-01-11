#include <stdio.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int a=1025;
  int *p;
  p=&a;
  cout<<"size of int is "<<sizeof(int)<<" bytes"<<endl;
  cout <<"address "<<p<<" value "<<*p<<endl;
  cout <<"address "<<p+1<<" value "<<*(p+1)<<endl;
  cout<<"size of char is "<<sizeof(char)<<" bytes"<<endl;
  char *q;
  q = (char*) p;
  // q has the LSB
  cout <<"address "<<q<<" value "<<*q<<endl; // doesnt work here. works in c
  cout <<"address "<<(int*)q<<" value "<<(int)*q<<endl; // for C++. need to cast back again
  cout <<"address "<<(int*)(q+1)<<" value "<<(int)*(q+1)<<endl; // 4
  cout <<"address "<<(int*)(q+2)<<" value "<<(int)*(q+2)<<endl; // actually 0
  cout <<"address "<<(int*)(q+3)<<" value "<<(int)*(q+3)<<endl; // actually read as signed byte when read as int
  cout <<"address "<<(int*)(q+4)<<" value "<<(int)*(q+4)<<endl; // junk

  return 0;
}

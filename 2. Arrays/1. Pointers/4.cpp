#include <stdio.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int a=1025;
  cout<<a<<endl;
  int *p;
  p=&a;
  cout <<"address "<<p<<" value "<<*p<<endl;
  int **q;
  q=&p;
  cout <<"address "<<q<<" value "<<*q<< " " << **q<<endl;
  int ***r;
  r=&q;
  cout <<"address "<<r<<" value "<<*r<<" "<< **r<<" "<<***r<<endl;
  ***r=10;
  cout<<a<<endl;
  **q=***r+*p+2;
  cout<<a<<endl;
  return 0;
}

#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]) {
  int a=10;
  int *p;
  p=&a;
  cout<<a<<endl;
  cout<<p<<endl;
  cout<<&a<<endl;
  cout<<*p<<endl;
  cout<<"a was "<<a<<endl;
  *p=20; //dereferencing
  cout<<"a is "<<a<<endl;
  return 0;
}

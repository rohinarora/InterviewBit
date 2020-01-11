#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
  char X[]="Hello";
  // string gets stored in space of array (in stackframe)
  X[0]='A'; // allowed
  cout << X<<"\n";
  // char *Z="Hello";
  // string gets stored as compile time constant;
  // in text segement of memory. can't be modified
  //Z[0]='A'; not allowed
  //cout << Z<<"\n";
    return 0;

}

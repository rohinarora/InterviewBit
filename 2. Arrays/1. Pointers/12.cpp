#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int *p=new int[n];
  int i=0;
  for (i=0;i<n;i++)
  {
    cout<<*(p+i)<<" ";
    *(p+i)=*(p+i)+1;
  }
  cout<<endl;
  for (i=0;i<n;i++)
  {
    cout<<*(p+i)<<" ";
  }
  cout<<endl;
  delete []p;
  for (i=0;i<n;i++) cout<<*(p+i)<<" "; // can still access it. 
}
    /*

  int i;
  for (i=0;i<n;i++) printf(" %d",*(p+i));

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
*/

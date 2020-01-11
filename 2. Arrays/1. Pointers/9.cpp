#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <vector>
using namespace std;

// void print_test(const char *C)->
// this function defination doesn't allow char array C to be
// modifed by print_test function

void print_char(char* A){
    int i=0;
    cout << "in print_char"<< "\n";
    while (*(A+i)!='\0'){
        cout <<A[i];
        i=i+1;
    }
    cout<<"\n";
}
void print_char2(char* A){
    cout << "in print_char2"<< "\n";
    while (*A!='\0'){
        cout <<*A;
        A++; // think why this works
        // A is treated as local pointer variable and not a array variable
    }
    cout<<"\n";
}
int main(int argc, const char * argv[]) {
    char F[]="JOHN";
    char K[]={'J','O','H','N','\0'};
    char *tmp;
    tmp=K; //valid
    // tmp holds address of K[0]
    cout << *tmp<<"\n";
    cout << *(tmp+1)<<"\n";
    cout << *(tmp+2)<<"\n";
    cout << *(tmp+3)<<"\n";  // *(tmp+3) same as tmp[3]
    cout << (tmp[3])<<"\n";
    //Illegal-k=k+1 or k++
    // Legal- tmp++ or tmp+1
    //
    print_char(F);
    print_char2(F);
    return 0;

}

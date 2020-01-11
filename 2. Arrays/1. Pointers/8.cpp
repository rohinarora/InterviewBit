#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    char C[4];
    C[0]= 'J'; // single quotes for char defination. double quotes for strings
    C[1]= 'O';
    C[2]='H';
    C[3]='N';
    cout <<C<<endl; // compiler doesn't know where the string is supposed to end
    C[3]='\0';
    cout <<"here 1 "<< C<<endl;
    cout << "string length is "<< strlen(C)<<"\n";
    char E[20]="JOHN"; // null termination is implicit in this defination
    // E is string. or array of chars. or char array
    cout << E<<endl;
    //Illegal-
    // char C[20];
    // C="JOHN"
    char F[]="JOHN"; // no need to explicilty give size of string array either
    cout << F<<endl;
    cout << " here2 "<<sizeof(F)<<" "<<strlen(F)<<"\n"; // null char counts in sizeof. Not in strlen.
    char K[]={'J','O','H','N','\0'}; // null termination no longer implicit in this syntax
    cout << "K is "<<K<<endl;
    return 0;

}

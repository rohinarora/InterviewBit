```
int a;
// size of memory allocated for variable a depends on data type and compiler
```

int - 4 bytes
char- 1 byte
float- 4 bytes

int ** q //pointer to a pointer. Will only store address of pointer to an integer

int *** r // will only store address of (** p) kind of variable.

Think r+1, \*r+1, \**r+1, \***r+1.


* 2D arrays and pointers    
  int A[2]   
  each of 2 element A[0] and A[1] take 4 bytes of memory  
  int B[2][3]  
  each of 2 element B[0] and B[1] are themselves 1 D arrays and take 12 bytes of memory   
  int * p=B # INVALID. B returns pointer to a 1D array of 3 integers. int * p expects pointer to a single integer  
  int (* p)[3]=B # VALID  
  print B or &B[0 ] or * B or B[0] or &B[0][0] # 400. B points to (1x3) array of integers. B[0] points to an array of integers. B[0] will return address of first element of that array  
  print B+1 # 412. 400+12. B returns pointer to 1D array of 3 integers. So pointer arithmetic will give address of next 1D array of 3 integers  
  print * (B+1) # or B[1] or &B[1][0]. 412  
  print * (B+1)+2 # same as B[1]+2. B[1] is pointer to integers (not array of integers; like B). same as &B[1][2]  
  print * (* B+1) # * B returns B[0]. B[0] is pointer to integers. B[0]+1 gives us address of B[0][1]. 404. &B[0][1]. final dereferencing gives value at B[0][1]
  B[i][j]=* (B[i]+j)  
  B[i][j]=* (* (B+i)+j)

  * 3D array    
  int C[3][2][2]
  int (* p )[2][2]=C
  print C //800
  print * C or C[0] or &C[0][0] //- > return pointer to int (* p)[2] . same value. 800.
  c[i][j][k]=* (* (* (c+i)+j)+k)=* (c[i][j]+k)


  C++

  vector<int> V; // declares an empty integer array of size 0. O(1)
  vector<int> V(100, 1); // declares an integer array of size 100 with all elements initialized to 1. O(size)
  V.size()
  V.push_back(new_value);
  V.pop_back();

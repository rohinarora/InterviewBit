* Arrays and Pointers.  
  Array access happens in O(1) time. Base address+offset  
  int A[4]  // Here A is pointer to the array.
  // compiler allocates 16 bytes of memory
  A[0]=1  
  A[1]=2  
  A[2]=3  
  A[3]=4  
  print (A)  # address of first element, or base address,  ie A[0]  
  print (* A) # same as print (A[0])  
  print (A+1) # address of second element, ie A[1] . next "integer". Therefore 4 bytes shift. could be any object type. different memory usage
  print (* (A+1) # same as print (A[1])  
  Therefore-  
  (A+i) == (&(A[i]))  # address   
  \*(A+1) == A[i] # value  
  Note-  
  A++ # INVALID  
  A+1 # VALID  
  int * p=A  
  p++ # VALID . same as A+1  

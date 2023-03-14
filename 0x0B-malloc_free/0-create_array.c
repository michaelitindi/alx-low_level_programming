#include <stdio.h>
#include <stdlib.h>





char *create_array(unsigned int size, char c)
{
  char  *mal;
  if (size == 0)
    {
      return (0);
    }
  
  
  mal = (char*) malloc(size * sizeof(char));
  *mal = c;
  
  return (mal);
  
   

}

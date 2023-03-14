#include <stdio.h>
#include <stdlib.h>





char *create_array(unsigned int size, char c)
{
  char  *mal;
  unsigned int i;
  if (size == 0)
    {
      return (0);
    }
  
  
  mal = (char*) malloc(size * sizeof(char));
  for(i = 0; i < size; i++)
    {
    *mal = c;
    mal++;
    }
  
  
  return (mal);
  free (mal); 
   

}

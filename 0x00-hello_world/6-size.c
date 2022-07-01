#include <stdio.h>
/**
 * main-Entry point
 * Return:Always 0 9success)
 */
int main(void)
{
  int i;
  long int I;
  long long int II;
  float d;
   char c;

  printf("size of a char:%lubytes(s)\n",sizeof(c));
  printf("size of int: %lu bytes(s)\n",sizeof(i));
 printf("size of long int: %lu bytes(s)\n",sizeof(I));
  printf("size of long long int: %lu bytes(s)\n",sizeof(II));
 printf("size of float: %lu bytes(s)\n",sizeof(d));
         return (0);
}	 
 

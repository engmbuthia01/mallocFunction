#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is the main function
 * @str: A  pointer to return
 * @s: string to be stored
 * @u: address
 * @strcpy: functiom to copy the string pointed by the source
 *
 * Return: Pointer id successful and NULL if not
 */

int main () {
   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(13);
   strcpy(str, "engmbuthia01");
   printf("String = %s,  Address = %u\n", str, str);

   /* Reallocating memory */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = %u\n", str, str);

   free(str);
   
   return(0);
}

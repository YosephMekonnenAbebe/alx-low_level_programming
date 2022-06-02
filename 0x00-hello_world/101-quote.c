#include <unistd.h>                                                                                                                     

/**                                                                                                                                     
  * main - Starting point of the program                                                                                                           *                                                                                                                                   
  * Description: Writing without f print and puts
  *
  * Return: Always 1 (Success)
  *
  */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(2, str1, 59);
	return (1);
}

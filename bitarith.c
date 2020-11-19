#include <stdio.h>
/*
	This program finds splits the input decimal value by using bit arithmetic
	to isolate the even and odd bits and then printing complements of those bits. 

	Author: Reema Amhaz
*/

/*
	Finds the binary complements of a given integer and prints them out with a space in between
	Parameters: an integer n (number to be split)
	Return value:
    none
*/
void split_binary(int n)
{
	int a = 0, b = 0;
	int i = 1, j = 1;

	while (n != 0) 
	{
		if (n % 2 == 1 ) 
		{
			// gets the even values
			if (i % 2 == 1) {
				a += j;
			} 
			// gets the odd values
			else 
			{
				b += j;
			}
			i++;
		}
		// update the bit
		j *= 2; 
		n /= 2;
	}
	printf("%d %d\n", a, b);
}
// gets user input 
int main(){
	int num = 0;
	scanf("%d", &num);
	split_binary(num);
}
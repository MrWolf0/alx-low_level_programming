/**
 *reverse_array - Reverses the content of an array of integers.
 *@a: The array of integers to be reversed.
 *@n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	/*using a temp pointer hold address of frist value in a*/
	int *first = a;
/*the trick in the code how i can get the address of last index in a*/
/*after initialize *first  to point to the address of first value in a*/
/*the *last  start point to the first addres*/
/*after the address of last value in a*/
	int *last = a + n - 1;
	/*loop to copy content from *first to *last  using swap concept*/
	/*note that we assigin pointer to another one when using =*/
	/*and using == to compare the equality*/
	while (first < last)
	{
		int temp = *first;
		*first = *last;
		*last = temp;
		first++;
		last--;
	}
}

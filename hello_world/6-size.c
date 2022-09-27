include < stdio.h >

/**
*main - Empty point
*Return: Always 0 (Succes)
*/
int main(void)
{
	char _char;
	int _int;
	long_int _long_int;
	longlong_int _longlong_int;
	float _float;

	printf("Size of a char: %zu byte(s)\n", sizeof(_char));
	printf("Size of a int: %zu byte(s)\n", sizeof(_int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(_long_int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(_longlong_int));
	printf("Size of a float: %zu byte(s)\n", sizeof(_float));
	Return(0);
}


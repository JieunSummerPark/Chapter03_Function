int add(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}

int factorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
		result *= i;
	return result;
}
//test file for gcov
int gcd (int a, int b);
int unused (int x);
int main (){
	int sum = 0;
	int evens = 0;
	int i;
	for ( i = 0; i < 10000; i++)
	{
	sum += i;
	if (sum % 2 == 0)
	{
		evens += i;
	}
	}
	gcd(3502, 42);
	return 0;
}
//gcd recursive
int gcd(int a, int b){
	if (b == 0)
		return a;
	else
		return gcd(b, (a % b));
}

//unused method used for testing coverage
int unused (int x){
	if (x > 5)
		return x + 3;
	else
		return x;
}
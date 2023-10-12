#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	m = n;
	while(n != 1)
	{
			m= m*(n-1);
			n--;
	} 
	printf("%d",m);
	return 0;
}

#include <stdio.h>

int main()
{
int j = 3;
	for (int i = 0; i < 101; i++)
	{
		if  (i % j  == 0)
		{
			printf("%d\n", i);
		}
	}
}

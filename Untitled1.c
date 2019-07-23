#include <stdio.h>

main()
{
	int a[10] = {2, 6, 4, 8, 23, 23, 3, 98, 32, 32};
	int i,j,k,temporary;
	
	for (i = 1; i < 10; ++i) {
		
		for (j = 0; j < 9; ++j)
		{
			if (a[j] > a[j + 1])
			{
				temporary = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temporary;
			}
		}
	}
	for (k = 0; k < 10; ++k)
	printf("%4d", a[k]);
}

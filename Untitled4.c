#include <locale.h>
#include <stdio.h>
main()
{
	int i,n,SC=0;
	
	printf("her bir dizinin eleman sayisi : ");
	scanf("%d", &n);
	int A[n],B[n];
	
	for (i=0;i<n;++i)
	{
		printf("A ve B dizilerinin %d. elemanlari : ",i+1);
		scanf("%d %d",&A[i],&B[i]);
		SC+=A[i]*B[i];
	}
	printf("Skaler carpim : %d",SC);
}

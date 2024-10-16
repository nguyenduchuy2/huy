#include <stdio.h>
#define MAX 10
typedef int MATRAN[MAX] [MAX];
void nhap(int &d, int &c)
{
	printf("Nhap so dong va so cot: ");
	scanf("%d%d", &d, &c);
	
}
void nhapMang2C(MATRAN a, int d, int c)
{
	for(int i=0; i<d; i++){
		for(int j=0;j <c; j++){
			printf("a[%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void xuatMang2C(MATRAN a, int d, int c)
{
	for(int i=0; i< d; i++){
		for(int j=0; j<c; j++)
			printf ("%d \t", a[i][j]);
		printf("\n");
	}
}

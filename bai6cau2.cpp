#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
typedef int MATRAN[MAX][MAX];

//------------ cau a -------------------
void nhapmang2C(MATRAN a, int n)
{
	srand((int)time(NULL));
	for ( int i =0 ; i<n; i++)
		for(int j=0;j<n;j++)
			a[i][j] = 1 + rand() % 10;
}
///------------nhap------------
void nhap(int &n)
{
	printf("Nhap so dong va so cot n=");
	scanf("%d",&n);
}

//--------------cau b-------------------
void xuatmang2chieu(MATRAN a,int n)
{
	for ( int i=0;i<n;i++)
	{
		for (int j = 0; j<n;j++ )
		{
			printf ("%4d\t",a[i][j]);
		}
		printf ("\n");
		
	}
}
//-------------cau c-------------------
void duongcheochinh(MATRAN a, int n)
{
	printf("\n Duong cheo chinh la:");
	for (int i = 0 ; i < n; i++)
	{
		printf ("%4d",a[i][i]);
	}
	printf("\n");
}
//--------------cau d----------------------
void duongcheophu(MATRAN a, int n)
{
	printf("\n Duong cheo phu la:");
	for ( int i = n - 1 ; i >= 0 ; i--)
	{
	
		printf ("%4d",a[n-1-i][i]);
	}
	printf("\n");
}
//------------------cau e-------------------
int tongdongk(MATRAN a , int n, int k)
{
	int tong=0;
	if(k<0||k>=n) return 0;
	for (int j = 0 ; j <n;j++)
	{
		tong += a[k][j];
	}	
	return tong;		
}
//---------------cau f----------------
void tongmoidong(MATRAN a, int n)
{
	for (int i=0; i <n; i++)
	{
		int tongdong = 0 ;
		for (int j =0; j < n ; j++)
		{
			tongdong += a[i][j];
		}
	printf("\n Tong cua dong %d la : %d",i,tongdong);
	}
}





//------------ham main----------------
int main (){
	MATRAN a;
	int n, k;
	nhap (n);
	nhapmang2C( a, n);
	printf("\n MA TRAN n:\n");
	xuatmang2chieu(a,n);
	duongcheochinh(a,n);
	duongcheophu(a,n);
	printf("Nhap k:"); scanf("%d",&k);
	printf("\nTong dong k la :%d",tongdongk(a,n,k));
	tongmoidong(a,n);
	return 0;

	
}




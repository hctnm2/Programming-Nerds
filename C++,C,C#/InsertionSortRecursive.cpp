#include<iostream>
using namespace std;

void resInsSort( int a[], int n ){
	if( n > 1 ) resInsSort( a, n-1 );
	int i;	
	int x = a[n];
	i = n-1;
	while( i >= 0 && a[i] >x ){
		a[i+1] = a[i];
		i--;
	}
	a[i+1] = x;
	return;
}

void xuat( int a[], int n ){
	for( int i = 0; i< n; i++ )
	cout<< a[i] << " ";
	cout<< endl;
}

int main(){
	int a[] = { 8, 4, 7, 6,9 ,5, 2, 0, 3, 1 };
	resInsSort( a, 9 );
	xuat( a, 10 );
	return 0;
}
